#include<stdio.h>

void stringcompare(char *x, char *y);

void main(){

char str1[80], str2[80];
    char *x, *y;

    x=str1;
    y=str2;

    printf("Enter first string: ");
    gets(x);
    printf("Enter second string: ");
    gets(y);

    stringcompare(x, y);

}

void stringcompare(char *x, char *y){
    int i=0;
    if(strlen(x)==strlen(y)){
        for(; i<strlen(x); i++){
            if(x[i]!=y[i]){
               printf("Strings do not match");
               break;
            }
            else if(x[i+1]=='\0') printf("0");
        }
    }
    else printf("Strings do not match");
}
