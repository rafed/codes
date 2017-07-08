#include<stdio.h>

int main(){

    long long int n;

    while(scanf("%lld", &n)==1){
        if(n>=0){
            printf("%lld\n", (n*(n+1)/2)+1);
        }
        else break;
    }

    return 0;

}
