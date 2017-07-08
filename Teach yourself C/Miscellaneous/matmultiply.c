#include<stdio.h>

void main(){

    int row_mat_1, column_mat_1, row_mat_2, column_mat_2;
    int i, j, k; //loop variables

    printf("Enter row of matrix 1: ");
    scanf("%d", &row_mat_1);
    printf("Enter column of matrix 1: ");
    scanf("%d", &column_mat_1);
    printf("Enter row of matrix 2: ");
    scanf("%d", &row_mat_2);
    printf("Enter column of matrix 2: ");
    scanf("%d", &column_mat_2);

    if(column_mat_1!=row_mat_2){
        printf("The matrices cannot be multiplied.");

    }

    int mat1[column_mat_1][row_mat_1];
    int mat2[column_mat_2][row_mat_2];
    int mat3[10][10];

    //mat3 all to 0
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            mat3[i][j]=0;
        }
    }


    printf("Enter values of matrix 1: ");
    for(i=0; i<row_mat_1; i++){
        for(j=0; j<column_mat_1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    //print result mat 1
    for(i=0; i<row_mat_1; i++){
        for(j=0; j<column_mat_1; j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter values of matrix 2: ");
    for(i=0; i<row_mat_2; i++){
        for(j=0; j<column_mat_2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    //print result mat 2
    for(i=0; i<row_mat_2; i++){
        for(j=0; j<column_mat_2; j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    //compute result
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    //print result
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    finish:
        0+0;

}


/*
for(i=0; i<column_mat_1; i++){
    for(k=0; k<row_mat_2; k++){
        for(j=0; j<row_mat_2; j++){
            sum+=mat1[i][k]*mat2[k][j];
        }
    mat3[i][j]=sum;
    sum=0;
    }
}
*/
