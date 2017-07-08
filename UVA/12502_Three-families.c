#include<stdio.h>

int main(){

    int N;
    float A, B, moneyA, tk, AB, extra;

    scanf("%d", &N);
    while(N--){
        scanf("%f %f %f", &A, &B, &tk);
        if(A!=B){
            AB=A+B;
            moneyA=A*tk/AB;
            A-=B;
            moneyA+=A*tk/AB;
            printf("%.0f\n", moneyA);
        }
        else printf("%.0f\n", tk/2);
    }

    return 0;

}
