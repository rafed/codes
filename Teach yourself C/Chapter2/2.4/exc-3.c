#include<stdio.h>

int main (void){

    int i, num;

    printf("Enter the number whose factors you want to print: ");
    scanf("%d", &num);
    printf("The factors are: \n");

    for(i=2; i<=(num/2)+1; i++){
        if(num%i==0){
            printf("%d\n", i);;
        }
    }

    return 0;

}

//Coded by Rafed.
