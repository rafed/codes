#include<stdio.h>

int main(){

    int num, i;
    long long int a, b;

    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%lld %lld", &a, &b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }

    return 0;

}
