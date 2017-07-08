#include <cstdio>
#include <cmath>

using namespace std;

typedef unsigned long long int INT;

INT fact(INT number) {
	INT temp;

	if(number <= 1) return 1;

	temp = number * fact(number - 1);
	return temp;
}

INT nCr(INT n, INT r)
{
	INT simplified=1;
	for(INT i=n; i>r; i--)
	{
		simplified *= i;
	}
	return simplified/fact(n-r);
}

int main()
{
	int T;
	INT n, r;
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
		scanf("%llu %llu", &n, &r);
		printf("%llu\n", nCr(n, r));
	}
}

