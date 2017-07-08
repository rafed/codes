#include<stdio.h>

void main(){

    char *p, **mp, str[80];

    p=str;
    mp=&p;

    printf("Enter your name: ");
    gets(*mp);
    printf("Hi %s", *mp);

}
