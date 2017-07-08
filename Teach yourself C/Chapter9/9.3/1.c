#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[]){

    FILE *from, *to;
    char ch;

    //check correct cum of arg
    if(argc!=3){
        printf("Usage: copy <source> <destination>\n");
        exit(1);
    }

    //open source file
    if((from=fopen(argv[1], "rb"))==NULL){
        printf("Cannot open source file");
        exit(1);
    }

    //open destination
    if((to=fopen(argv[2], "wb"))==NULL){
        printf("Cannot open destination file");
        exit(1);
    }

    //copy file
    while(!feof(from)){
        ch=fgetc(from);
        if(ferror(from)){
            printf("Error reading source file.\n");
            exit(1);
        }
        if(!feof(from)) fputc(ch, to);
        if(ferror(to)){
            printf("Error writing destination file.\n");
            exit(1);
        }
    }


    if(fclose(from)==EOF){
        printf("Error closing source file.\n");
        exit(1);
    }

    if(fclose(to)==EOF){
        printf("Error closing destination file.\n");
        exit(1);
    }

}
