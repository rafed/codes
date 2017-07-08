#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

typedef long long int ll;

#define MAX 1000000001

int main(){

	bool *prime = new bool[MAX];

	memset(prime, true, MAX*sizeof(*prime));

	prime[0] = prime[1] = false;

	for(ll i=4; i<MAX; i+=2)
		prime[i] = false;

	ll root = sqrt(MAX);
	for(ll i=3; prime[i] && i<=root+1; i+=2)
	{
		for(ll j=i*i; j<=MAX; j+=i)
		prime[j] = false;
	}

	int T;
	ll m, n;

	scanf("%d", &T);
	while(T--)
	{
		scanf("%lld %lld", &m, &n);
		for(ll i=m; i<=n; i++)
		{
			if(prime[i]) printf("%lld\n", i);
		}
		printf("\n");
	}

	delete[] prime;

	return 0;

}
