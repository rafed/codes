#include <cstdio>

typedef unsigned long long int INT;

int main(){

	INT a, b, total;

	while(scanf("%llu %llu", &a, &b)==2){
	
		total = 0;
		
		total += a;
		while(a>=b){
			 total += a/b;
			 a = (a/b + a%b);
		}
		
		printf("%llu\n", total);
	
	}

	return 0;

}
