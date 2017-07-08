#include <cstdio>
#include <cmath>

using namespace std;

#define PI acos(-1.0)

int main()
{
	double R, N;
	double r, I, E, deg, base;

	while(scanf("%lf %lf", &R, &N)==2)
	{
		if(N == 1){
			printf("%.10lf %.10lf %.10lf\n", R, 0.0, 0.0);
			continue;
		}

		deg = (PI/N);

		r = sin(deg)/(1+sin(deg)) * R;

		base = r/tan(deg);
		I = N*2*(0.5*base*r - ((PI/2-deg)/2)*r*r);

		E = PI*R*R - N*PI*r*r - I;

		printf("%.10lf %.10lf %.10lf\n", r, I, E);
	}

	return 0;
}
