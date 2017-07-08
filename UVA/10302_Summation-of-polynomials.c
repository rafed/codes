#include<stdio.h>

int main(){

    unsigned long int n;

    while(scanf("%lu", &n)==1){
        printf("%lu\n", (n*n*(n+1)*(n+1))/4);
    }

    return 0;

}
