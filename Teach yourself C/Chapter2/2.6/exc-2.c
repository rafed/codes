#include<stdio.h>

int main (void){

    double i;

    printf("From where do you wan to countdown\? \n");
    scanf("%lf", &i);

    for(i; i>=0; i--){
        printf("%.0lf \n", i);
    }
    printf("\a");

    return 0;

}

//Coded by Rafed.
