#include<stdio.h>

int main (void){

    int choice;
    float input1, input2;

    printf("1. Add   2.Subtract\n");
    printf("Choose operation: ");
    scanf("%d", &choice);

    if (choice==1){
        printf("Enter numbers to add: ");
        scanf("%f %f", &input1, &input2);
        printf("Result = %.2f", input1+input2);
    } else if (choice==2){
        printf("Subtract what from what? ");
        scanf("%f %f", &input1, &input2);
        printf("Result = %.2f", input2-input1);
    } else {
        printf("Invalid option.");
    }

    return 0;

}

//Coded by Rafed.
