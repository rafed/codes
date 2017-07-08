#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char *argv[]){

    FILE *from, *to;
    char ch, watch;

    //check for correct number of arguments
    if(argc<3){
        printf("Usage: copy <source> <destination>");
        exit(1);
    }

    //open source file
    if((from=fopen(argv[1], "r"))==NULL){
        printf("Cannot open source file\n");
        exit(1);
    }

    //open destination file
    if((to=fopen(argv[2], "w"))==NULL){
        printf("Cannot open destination file.");
        exit(1);
    }

    if(argc==4 && !strcmp("watch", argv[3])) watch=1;
    else watch=0;

    //copy the file
    while((ch=fgetc(from))!=EOF){
        fputc(ch, to);
        if(watch) putchar(ch);
    }
    fclose(from);
    fclose(to);


}
