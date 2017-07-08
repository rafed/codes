#include<stdio.h>

int main(){

    int answer, count, chances, right;

    for(count=1; count<11; count++){
        printf("What is %d + %d? ", count, count);
        scanf("%d", &answer);

        if (answer==count+count) printf("Right! \n");
        else{
            printf("Sorry, you're wrong. \n");
            printf("Try again. \n");

            right=0;

            //nested for
            for(chances=0; chances<3 && !right; chances++){
                printf("What is %d + %d?", count, count);
                scanf("%d", &answer);

                if (answer==count+count){
                    printf("Right! \n");
                    right=1;
                }
            }

            //if answer is still wrong, tell user
            if(!right) printf("The answer is %d.\n", count+count);
        }
    }

    return 0;

}

//Coded by Rafed.
