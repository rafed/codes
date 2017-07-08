#include<stdio.h>

void myputs(char *p);

void main(){

    myputs("This is a test");

}

void myputs(char *p){
    while(*p){
        printf("%c", *p);
        p++;
    }
    printf("\n");
}
