#include<stdio.h>

void stringcopy(char *x, char *y);

void main(){

    char str1[80], str2[80];
    char *x, *y;

    x=str1;
    y=str2;

    printf("Enter string: ");
    gets(x);

    stringcopy(x, y);
    puts(y);

}

void stringcopy(char *x, char *y){
    int i=0;
    while(x[i]!='\0'){
        y[i]=x[i];
        i++;
    }
    y[i]='\0';
}
