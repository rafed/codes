#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main(){

    char fname[80];

    printf("Enter name of file to erase: ");
    gets(fname);
    printf("Are you sure? (Y/N)");
    if(toupper(getchar())=='Y') remove(fname);

}
