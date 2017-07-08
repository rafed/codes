#include <cstdio>
#include <cmath>

using namespace std;

int main(){

	int N;
	double d, v, u;
	double a, b;

    scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%lf %lf %lf", &d, &v, &u);
		if(v >= u || u == 0 || v==0){
			printf("Case %d: can't determine\n", i);
			}
		else{
			a = d/u;
			b = d/sqrt(u*u - v*v);
			printf("Case %d: %.3lf\n", i, /*fabs(a-b)*/(a>b) ? (a-b):(b-a));
		}
	}

	return 0;

}
