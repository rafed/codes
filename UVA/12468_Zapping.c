#include<stdio.h>

int main(){

    int a, b, c, d;

    while(scanf("%d %d", &a, &b) && a!=-1){
        if(a>b){
            c=a-b;
        }
        else c=b-a;
        d=100-c;
        if(c<d) printf("%d\n", c);
        else printf("%d\n", d);
    }

    return 0;

}
