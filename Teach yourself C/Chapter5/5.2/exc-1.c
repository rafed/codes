#include<stdio.h>
#include<string.h>

void main(){

    char str[80];
    int i;

    printf("Enter a string to type backwards:\n");
    gets(str);

    for(i=strlen(str)-1; i>=0; i--) printf("%c", str[i]);

}
