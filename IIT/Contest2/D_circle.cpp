#include <cstdio>
#include <cmath>

const double PI = 3.141592;

int main(){

	int T;

	double R, r;
	int n;
	
	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
		scanf("%lf %d", &R, &n);
		r = (double) R / (1+(1/sin(PI/n)));
		printf("Case %d: %g\n", i, r);
	}
	
	return 0;

}
