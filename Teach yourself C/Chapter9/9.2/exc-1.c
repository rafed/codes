#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[]){

    FILE *fp;
    char ch;

    //check for correct command line argument
    if(argc!=2){
        printf("Incorrect argument");
        exit(1);
    }

    if((fp=fopen(argv[1], "r"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

}
