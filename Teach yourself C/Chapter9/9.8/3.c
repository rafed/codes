#include<stdio.h>
#include<string.h>

void main(){

    char str[10];
    int i;

    printf("Enter a string: ");
    fgets(str, 10, stdin);

    //remove newline, if present
    i=strlen(str)-1;
    if(str[i]=='\n') str[i]='\0';

    printf("This is your string: %", str);

}
