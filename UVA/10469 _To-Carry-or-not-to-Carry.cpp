#include <cstdio>

using namespace std;

typedef unsigned long long int INT;

int main(){

	INT a, b;

	while(scanf("%llu %llu", &a, &b)==2){
		printf("%llu\n", a ^ b);
	}

	return 0;

}
