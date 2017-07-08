#include<stdio.h>

void main(){

    char str[]="Pointers are fun";
    char *p;
    int i;

    p=str;

    //loop until null is found
    for(i=0; p[i]; i++)
        printf("%c", p[i]);

}
