#include<stdio.h>

void main(){

    int twod[4][5];
    int i, j;

    for(i=0; i<4; i++)
        for(j=0; j<5; j++)
            twod[i][j]=i*j;

    for(i=0; i<4; i++){
        for(j=0; j<5; j++)
            printf("%d ", twod[i][j]);
        printf("\n");
    }
}
