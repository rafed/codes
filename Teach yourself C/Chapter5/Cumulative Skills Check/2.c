#include<stdio.h>
#include<string.h>

void main(){

    char str[80];
    int i, j;

    printf("Enter message to encode: ");
    gets(str);

    i=0; j=strlen(str)-1;
    while(i<strlen(str)/2){
        printf("%c%c", str[i], str[j]);
        i++;
        j--;
    }

}
