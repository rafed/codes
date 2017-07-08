#include<stdio.h>

int main(){

	long long int frequency, amplitude, i, j, k, l, T;

	scanf("%lld", &T);
	for(l=1; l<=T; l++){
		if(l>1) printf("\n");
		scanf("%lld %lld", &amplitude, &frequency);
		for(k=1; k<=frequency; k++){
			if(k>1) printf("\n");
			for(i=1; i<=amplitude; i++){
				for(j=1; j<=i; j++){
					printf("%lld", i);
				}
				printf("\n");
			}
			for(i=amplitude-1; i>0; i--){
				for(j=1; j<=i; j++){
					printf("%lld", i);
				}
				printf("\n");
			}
		}
	}

	return 0;

}
