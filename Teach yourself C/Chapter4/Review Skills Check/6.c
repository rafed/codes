#include<stdio.h>

void main(){

    int choice;

    do{
        printf("Convert\n");
        printf("1. feet to meters\n");
        printf("2. meters to feet\n");
        printf("3. ounces to pounds\n");
        printf("4. pounds to ounces\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while(choice!=5);

}
