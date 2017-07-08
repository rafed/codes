#include<stdio.h>

int main(){

    int N, a, b, c, i;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d %d %d", &a, &b, &c);
        if((a+b)>c) printf("OK\n");
        else printf("Wrong!!\n");
    }

    return 0;

}
