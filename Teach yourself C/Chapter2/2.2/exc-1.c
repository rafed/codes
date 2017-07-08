#include<stdio.h>

int main (void){

    int num1, num2, res;
    char op, junk;

    printf("Enter two numbers to multiply or divide: ");
    scanf("%d %d", &num1, &num2);

    printf("Multiply or divide?");
    scanf("%c", &op);
    scanf("%c", &op);

    if(op=='*'){
        res=num1*num2;
        printf("Result= %d \n", res);
    } else if (op=='/'){
        res=num1/num2;
        printf("Result= %d \n", res);
    } else {
        printf("Invalid operator entered. \n");
    }

    return 0;

}

//Coded by Rafed.
