#include<stdio.h>

void main(){

    int mat[3][3][3];
    int i, j, k, value=1;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                mat[i][j][k]=value;
                value++;
                printf("%d ", mat[i][j][k]);
            }
        }
    }

}
