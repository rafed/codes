#include<stdio.h>

int main(){

    int x1, y1, x2, y2, r1, r2;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && x1!=0){
        if(x1>=x2) r1=x1-x2;
        else r1=x2-x1;
        if(y1>=y2) r2=y1-y2;
        else r2=y2-y1;
        if(r1==0 && r2==0) printf("0\n");
        else if(r1==r2) printf("1\n");
        else if(r1==0 || r2==0) printf("1\n");
        else printf("2\n");
    }

    return 0;

}
