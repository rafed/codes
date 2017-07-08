#include<stdio.h>

void main(){

    char str[80];
    int i;

    printf("Enter a string:\n");
    gets(str);

    for(i=strlen(str); i<80; i++)
        strcat(str, ".");

    puts(str);

}
