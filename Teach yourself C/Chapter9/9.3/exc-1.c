#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc, char *argv[]){

    FILE *fp;
    int count, a;

    //main arg check
    if(argc!=2){
        printf("Incorrect arguments");
        exit(1);
    }

    if((fp=fopen(argv[1], "r"))==NULL){
        printf("Error opening file");
        exit(1);
    }

    count=0;
    while(!feof(fp)){
        fgetc(fp);
        if(ferror(fp)){
            printf("File error");
            exit(1);
        }
        count++;
    }

    fclose(fp);
    printf("The file %s has %d bytes.", argv[1], count);
    a=sizeof(argv[1]);
    printf("%d",a);

}
