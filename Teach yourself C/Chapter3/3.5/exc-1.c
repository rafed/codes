#include<stdio.h>

int main(){

    float input;

    printf("Enter \"0\" to extit. \n");

    do{
        printf("Galleons: ");
        scanf("%f", &input);
        printf("Liters: %.3f \n", input*3.7854);
    } while(input!=0);

    return 0;

}

//Coded by Rafed.
