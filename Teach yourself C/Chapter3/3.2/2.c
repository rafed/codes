#include<stdio.h>

int main(){

    int answer, count;
    int again;

    for (count=1; count<11; count++){
        printf("What is %d + %d? \n", count, count);
        scanf("%d", &answer);

        if (answer==count+count) printf("Right! \n");
        else {
            printf("Sorry, you're wrong! Try again. \n");
            printf("What is %d + %d? \n", count, count);
            scanf("%d", &answer);

            //nested if
            if (answer==count+count) printf("Right! \n");
            else printf("Wrong, the answer is %d \n", count+count);;

        }
    }

    return 0;

}

//Coded by Rafed.
