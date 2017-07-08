#include<stdio.h>

int main(){

    int C, i, marks[1000], above_avg, N, sum, avg;
    float result;

    while(scanf("%d", &C)==1){
        while(C--){
            sum=0;
            above_avg=0;
            scanf("%d", &N);
            for(i=0; i<N; i++){
                scanf("%d", &marks[i]);
                sum+=marks[i];
            }
            avg=sum/N;
            for(i=0; i<N; i++){
                if(marks[i]>avg) above_avg++;
            }
            result=(float)above_avg/(float)N;
            printf("%.3f%%\n", result*100);
        }
    }

    return 0;

}
