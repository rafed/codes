#include<stdio.h>
#include<string.h>

void stringconcatenation(char *x, char *y);

void main(){

    char str1[80], str2[80];
    char *x, *y;

    x=str1;
    y=str2;

    printf("Enter first string: ");
    gets(x);
    printf("Enter second string: ");
    gets(y);

    stringconcatenation(x, y);
    puts(x);

}

void stringconcatenation(char *x, char *y){
    int i=0, j=0;
    while(x[i]!='\0'){
        i++;
    }
    while(y[j]!='\0'){
        x[i]=y[j];
        i++;
        j++;
    }
    x[i]='\0';
}
