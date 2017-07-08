#include<stdio.h>

int main (void){

    int count, answer;

    for(count=1; count<11; count=count+1){

        printf("What is %d + %d? \n", count, count);
        scanf("%d", &answer);

        if (answer==count+count) printf("You're right!! \n");
        else {
            printf("Sorry, you're wrong. The answer is %d. \n", count+count);
        }
    }

    return 0;

}

//COded by Rafed.
