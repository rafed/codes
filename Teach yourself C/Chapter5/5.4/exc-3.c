#include<stdio.h>

void main(){

    int mat[][3]={
        1, 1, 1,
        2, 4, 8,
        3, 9, 27,
        4, 16, 64,
        5, 25, 125,
        6, 36, 216,
        7, 49, 343,
        8, 64, 512,
        9, 81, 729,
        10, 100, 1000
    };
    int prompt;
    int i;

    printf("Enter the cube of a number: ");
    scanf("%d", &prompt);

    for(i=0; i<10; i++){
        if(prompt==mat[i][2]){
            printf("Root: %d\nSquare: %d", mat[i][0], mat[i][1]);
            break;
        }
    }

    if(i==10) printf("Number not found.");

}
