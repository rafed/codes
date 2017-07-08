#include<stdio.h>
#include<string.h>

void main(){

    char *p="stop";
    char str[80];

    do{
        printf("Enter a string: ");
        gets(str);
    } while(strcmp(p, str));

}
