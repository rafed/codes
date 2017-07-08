#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

typedef long long int ll;

bool prime[1000];
int digitPrime[1000001];

bool checkIfPrime(ll num)
{
    ll root = sqrt(num);
    bool flag = true;

    for(ll i=2; i<=root; i++){
        if(prime[i]){
            if(num % i == 0) {
                flag = false;
                break;
            }
        }
    }
    if(flag)
        return true;

    return false;
}
bool checkIfDigitPrime(ll num)
{
    ll digitSum = 0;
    while(num!=0){
        digitSum += num%10;
        num /= 10;
    }

    if(prime[digitSum])
        return true;

    return false;
}

int main()
{
    /*Initializing START*/
    memset(digitPrime, 0, sizeof(digitPrime));
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for(int i=4; i<1000; i+=2)
        prime[i] = false;

    for(int i=3; i<1000; i+=2){
        if(prime[i]){
            for(int j=i*i; j<1000; j+=i){
                prime[j] = false;
            }
        }
    }

    for(ll i=0; i<=1000000; i++){
        if(checkIfPrime(i) && checkIfDigitPrime(i))
            digitPrime[i] = (int) digitPrime[i-1]+1;
        else
            digitPrime[i] = digitPrime[i-1];
    }

    /*Initializing END*/

    ll N, t1, t2;

    scanf("%lld", &N);
    while(N--)
    {
        scanf("%lld %lld", &t1, &t2);
        printf("%d\n", digitPrime[t2]-digitPrime[t1-1]);
    }

    return 0;
}
