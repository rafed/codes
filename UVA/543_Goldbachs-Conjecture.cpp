#include <cstdio>
#include <cmath>
#include <cstring>

#define MAX 1000001

typedef long long int ll;

int main()
{
	bool primes[MAX];

	memset(primes, true, sizeof(primes));
	primes[0] = primes[1] = false;

	for(ll i=4; i<MAX; i+=2)
		primes[i] = false;

	for(ll i=3; i<MAX; i+=2){
		if(primes[i]){
			for(ll j=i*i; j<MAX; j+=i)
				primes[j] = false;
		}
	}

	ll input;
	ll a, b;
	bool flag;

	while(scanf("%lld", &input) && input)
	{
		a = b = 0;
		flag = false;
		for(ll i=2; i<input/2+1; i++){
			if(primes[i] && primes[input-i]){
				a = i;
				b = input-i;
				flag = true;
				break;
			}
		}
		if(flag) printf("%lld = %lld + %lld\n", input, a, b);
		else printf("Goldbach's conjecture is wrong.\n");
	}

	return 0;
}
