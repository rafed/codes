#include<stdio.h>

int main(){

    int input;

    printf("Enter the number to check: ");
    scanf("%d", &input);
    if (input>=0) {
            if(input==0) {
                printf("It is zero.");
            } else {
                printf("The number is positive.");
            }
    } else printf("The number is negative.");


    return 0;

}

//Coded by Rafed.
