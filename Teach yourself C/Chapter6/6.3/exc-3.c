#include<stdio.h>

void main(){

    char str[80], *p;
    p=str;

    printf("Enter a string: ");
    gets(str);

    while(*p!=' '){
        p++;
    }

    while(*p){
        printf("%c", *p);
        *p++;
    }

}
