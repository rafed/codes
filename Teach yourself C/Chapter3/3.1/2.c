#include<stdio.h>
#include<conio.h>

int main(){

    int a, b;
    char ch;

    printf("Add, Subtract, Multiply or Divide? Enter first letter: ");
    ch=getchar();
    printf("\n");;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(ch=='A') printf("%d", a+b);
    if(ch=='B') printf("%d", a-b);
    if(ch=='C') printf("%d", a*b);
    if(ch=='D') printf("%d", a/b);

    return 0;

}

//Coded by Rafed.
