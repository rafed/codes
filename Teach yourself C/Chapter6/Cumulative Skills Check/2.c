#include<stdio.h>

void main(){

    char str[80], *p;
    int i, spaces=0;
    p=str;

    printf("Enter a string: ");
    gets(p);

    while(*p){
        if(*p==' ') spaces++;
        p++;
    }

    printf("Number of spaces: %d", spaces);

}
