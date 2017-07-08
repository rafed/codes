#include<stdio.h>
#include<string.h>

int main(){

    long long int total=0, money;
    int N;
    char s[20];

    scanf("%d", &N);
	while(N--){
        scanf("%s", s);
        if(!strcmp(s, "donate")){
			scanf("%lld", &money);
			total+=money;
        }
        else printf("%lld\n", total);
	}

	return 0;

}
