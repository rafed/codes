#include<stdio.h>

int main(){

    int N, n, i, result;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &n);
        n*=63;
        n+=7492;
        n*=5;
        n-=498;
        n/=10;
        n=n%10;
        if(n<0) n*=-1;
        printf("%d\n", n);
    }

    return 0;

}
