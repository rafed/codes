#include <cstdio>

typedef long long int ll;

int main()
{
	ll T;
	ll n, m;

	scanf("%lld", &T);
	for(ll i=1; i<=T; i++)
	{
		scanf("%lld %lld", &n, &m);
		printf("Case %lld: %lld\n", i, n*m/2);
	}
}
