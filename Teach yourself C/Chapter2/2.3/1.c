#include<stdio.h>

int main (void){

    float num;
    int choice;

    printf("1: Feet to Meters, 2: Meters to feet. \n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice==1){
        printf("Enter number of feet:");
        scanf("%f", &num);
        printf("Meters: %f", num/3.28);
    } else {
        printf("Enter number of meters:");
        scanf("%f", &num);
        printf("Feet: %f", num*3.28);
    }

    return 0;

}

//Coded by Rafed.
