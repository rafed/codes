#include<stdio.h>

int main (void) {

    int i, j, k, row;

    printf("Enter the number of rows you want in your pyramid: ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){

        for(j=1; j<=row-i; j++){
            printf(" ");
        }

        for(k=1; k<=2*i-1; k++){
            printf("*");
        }

    printf("\n");

    }

    return 0;

}

//Coded by Rafed.
