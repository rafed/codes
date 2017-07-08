#include<stdio.h>

int main (void) {

    int i, j, k, row;

    printf("Enter the number of rows you want in your ulta pyramid: ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){

        for(j=1; j<i; j++){
            printf(" ");
        }

        for(k=0; k<=2*row-2*i; k++){
            printf("*");
        }

    printf("\n");

    }

    return 0;

}

//Coded by Rafed.
