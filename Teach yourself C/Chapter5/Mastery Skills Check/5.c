#include<stdio.h>

void main(){

    char string[80];

    do{
        gets(string);
    } while(strcmp("quit", string));

}
