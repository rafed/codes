#include<stdio.h>

void main(){

    int bball[4][5], total[4];
    int i, j;

    for(i=0; i<4; i++)
    for(j=0; j<5; j++){
        printf("Quarter %d, player %d, ", i+1, j+1);
        printf("Enter number of points: ");
        scanf("%d", &bball[i][j]);
    }

    //display results
    for(i=0; i<4; i++)
    for(j=0; j<5; j++){
        printf("Quarter %d. player %d, ", i+1, j+1);
        printf("%d\n", bball[i][j]);
    }

    //initializing zero
    for(i=0; i<4; i++) total[i]=0;

    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            total[i]+=bball[i][j];
        }
    }

    for(i=0; i<4; i++){
        printf("Goals in quarter %d: %d \n", i+1, total[i]);
    }
}
