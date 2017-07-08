#include<stdio.h>

int main(){

    int h1, m1, h2, m2, res;

    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)==4){
        if(h1==0 && m1==0 && h2==0 && m2==0) break;
        h1*=60;
        h2*=60;
        res=h1+m1-h2-m2;
        res=1440-res;
        if(res>1440) res=res%1440;
        printf("%d\n", res);
    }

    return 0;

}
