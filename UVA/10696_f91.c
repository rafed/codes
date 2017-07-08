#include<stdio.h>

int f91(long long int x);

int main(){

    long long int N;

    while(scanf("%lld", &N) && N!=0){
		printf("f91(%lld) = %lld\n", N, f91(N));
    }

	return 0;

}

int f91(long long int x){
	if(x<=100) return f91(f91(x+11));
	else if(x>=101) return x-10;
}
