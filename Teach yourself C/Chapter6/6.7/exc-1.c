#include<stdio.h>

void mystrcat(char *to, char *from);

void main(){

    char str[80]="Hey diddle diddle";

    mystrcat(str, " the cat and the fiddle");

    printf(str);

}

void mystrcat(char *to, char *from){
    while(*to){
        to++;
    }
    while(*from){
        *to++=*from++;
    }
    *to='\0';
}
