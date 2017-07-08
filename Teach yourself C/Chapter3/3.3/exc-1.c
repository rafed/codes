#include<stdio.h>

int main(){

    int i, num;
    float a, b;

    printf("How many calculations do you want to perform? ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("Enter distance and average speed  for calculation %d: ", i+1);
        scanf("%f %f", &a, &b);
        printf("The driving time is %.2f \n", a/b);
    }

    return 0;

}

//Coded by Rafed.
