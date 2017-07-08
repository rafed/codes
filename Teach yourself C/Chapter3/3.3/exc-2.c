#include<stdio.h>

int main(){

    int i;

    printf("Countdown from: ");
    scanf("%d", &i);

    for(;i; i--);

    printf("\a");

    return 0;

}

//Coded by Rafed.
