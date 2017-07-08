#include<stdio.h>

void mystrcpy(char *to, char *from);

void main(){

    char str[80];

    mystrcpy(str,"this is a test");
    printf(str);

}

void mystrcpy(char *to, char *from){
    while(*from) *to++=*from++;
    *to='\0';
}
