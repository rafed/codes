#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc, char *argv[]){

    FILE *fp;
    char str[1000];

    //check cmd arg
    if(argc!=2){
        printf("Specify file name.\n");
        exit(1);
    }

    //open file
    if((fp=fopen(argv[1], "w"))==NULL){
        printf("Cannot open file");
        exit(1);
    }

    printf("Enter a blank line to stop.\n");
    do{
        printf(": ");
        gets(str);
        strcat(str, "\n"); //add newline
        if(*str!='\n') fputs(str, fp);
    } while(*str!='\n');

    fclose(fp);

    //open file for input
    if((fp=fopen(argv[1], "r"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    //read back the file
    do{
        fgets(str, 20, fp);
        if(!feof(fp)) printf(str);
    } while(!feof(fp));

    fclose(fp);

}
