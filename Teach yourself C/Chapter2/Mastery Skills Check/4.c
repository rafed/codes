#include<stdio.h>

int main (void){

    int count, answer, right=0, wrong=0;

    for(count=1; count<11; count=count+1){

        printf("What is %d + %d? \n", count, count);
        scanf("%d", &answer);

        if (answer==count+count) {
            printf("You're right!! \n");
            right++;
        } else {
            printf("Sorry, you're wrong. The answer is %d. \n", count+count);
            wrong++;
        }
    }

    printf("Right: %d\n", right);
    printf("Wrong: %d", wrong);

    return 0;

}

//COded by Rafed.
