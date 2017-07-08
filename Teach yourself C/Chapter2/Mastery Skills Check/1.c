#include<stdio.h>

int main (void){

    int i, input, value=49;

    printf("Guess the number between 1 and 100! You have 10 chances. \n\n");
    for(i=1; i<=10; i++){

        printf("Enter the number: ");
        scanf("%d", &input);

        if(input<value){
            printf("The number is bigger.\n\n");
        } else if(input>value) {
            printf("The number is smaller.\n\n");
        } else {
            printf("You're right! Congratulations!!!\n");
            break;
        }

    }

    if (input != value) {printf("Ooops! You've failed. Better luck next time.");}

    return 0;

}

//Coded by Rafed.
