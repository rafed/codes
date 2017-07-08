#include<stdio.h>

int stringlength(char *x);

void main(){

    char str[80];
    char *x;

    x=str;

    printf("Enter string to check length: ");
    gets(x);

    printf("String length is %d", stringlength(x));

}

int stringlength(char *x){
    int i=0;
    while(x[i]!='\0'){
        i++;
    }
    return i;
}
