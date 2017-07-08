#include<stdio.h>

int GCD(int a, int b);

int main(){

    int N, G, i, j;

    while(scanf("%d", &N) && N!=0){
        G=0;
        for(i=1; i<N; i++){
            for(j=i+1; j<=N; j++){
                G+=GCD(i,j);
            }
        }
        printf("%d\n", G);
    }

    return 0;

}

int GCD(int a, int b){
    while(a!=b){
        if(a>b) return GCD(a-b, b);
        else return GCD(a, b-a);
    }
    return a;
}
