#include <cstdio>

int main()
{
	int T;
	scanf("%d", &T);

	long long int a, b, c;

	for(int i=1; i<=T; i++)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		printf("Case %d: ", i);

		if(a<=0 || b<=0 || c<=0) printf("Invalid\n");
		else if(a+b<=c || b+c<=a || c+a<=b) printf("Invalid\n");
		else if(a==b && b==c && c==a) printf("Equilateral\n");
		else if(a==b || b==c || c==a) printf("Isosceles\n");
		else printf("Scalene\n");
	}

	return 0;
}
