#include<stdio.h>

int main(){

    int choice;

    printf("Mailing list menu: \n");
    printf("1. Enter addresses \n");
    printf("2. Delete addresses \n");
    printf("3. Search the list \n");
    printf("4. Print the list \n");
    printf("5. Quit \n");

    do{
        printf("Enter the number of your choice (1-5): ");
        scanf("%d", &choice);
    } while(choice<1 || choice>5);

    return 0;

}

//Coded by Rafed.
