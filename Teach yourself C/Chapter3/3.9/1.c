#include<stdio.h>

int main(){

    int a, b;
    char ch, x;

    printf("Do you want to: \n");
    printf("Add, Subtract, Multiply or Divide? \n");
    //force user to enter a valid response
    do{
        printf("Enter first letter: ");
        ch=getchar();
        x=getchar();
    } while(ch!='A' && ch!='S' && ch!='M' && ch!='D');
    printf("\n");

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(ch){
        case 'A': printf("%d", a+b); break;
        case 'S': printf("%d", a-b); break;
        case 'M': printf("%d", a*b); break;
        case 'D': printf("%d", a/b); break;
    }

    return 0;

}

//Coded by Rafed.
