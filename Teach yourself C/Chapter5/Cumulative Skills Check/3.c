#include<stdio.h>

void main(){

    char str[80];
    int space=0, comma=0, period=0;
    int i;
    char ch;

    printf("Enter a string: ");
    gets(str);

    for(i=0; i<strlen(str)-1; i++){
        ch=str[i];
        switch(ch){
            case '.': period++; break;
            case ' ': space++; break;
            case ',': comma++; break;
        }
    }

    printf("Space: %d\nComma: %d\nPeriod: %d", space, comma, period);;

}
