#include<stdio.h>

int main (void){

    int answer;

    printf("What is 10+14? ");
    scanf("%d", &answer);

    if(answer==10+14) printf("Right!");
    else {
        printf("Sorry, you're wrong. The answer is 24. \n");
    }

    return 0;

}

//Coded by Rafed.
