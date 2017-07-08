#include<stdio.h>

int main(){
    int v, t;
    while(scanf("%d %d", &v, &t)==2){
        if(-100<=v && v<=100 && 0<=t && t<=200){
            printf("%d\n", 2*v*t);
        }
    }
    return 0;
}
