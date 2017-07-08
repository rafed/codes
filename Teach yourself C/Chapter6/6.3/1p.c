#include<stdio.h>
#include<ctype.h>

void main(){

    char str[80], *p;
    int i;

    printf("Enter a string: ");
    gets(str);
    p=str;

    while(*p){
        *p=toupper(*p);
        p++;
    }

    printf("%s\n", str);

    p=str  ; //reset p

    while(*p){
        *p=tolower(*p);
        p++;
    }

    printf("%s\n", str);

}

