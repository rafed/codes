#include<stdio.h>

int main(){

    int i=1, num;
    float a, b;

    printf("How many calculations do you want to perform? ");
    scanf("%d", &num);

    while(num!=0){
        printf("Enter distance and average speed  for calculation %d: ", i);
        scanf("%f %f", &a, &b);
        printf("The driving time is %.2f \n", a/b);
        num--;
        i++;
    }

    return 0;

}

//Coded by Rafed.
