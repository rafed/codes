#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[]){

    FILE *fp1, *fp2;
    char ch1, ch2, same;
    unsigned long l;

    //check correct num of args
    if(argc!=3){
        printf("Usage: Comapre <file1> <file2>\n");
        exit(1);
    }

    //open first file
    if((fp1=fopen(argv[1], "rb"))==NULL){
        printf("Cannot open first file.\n");
    }

    //open second file
    if((fp2=fopen(argv[2], "rb"))==NULL){
        printf("Cannot open second file.\n");
        exit(1);
    }

    l=0;
    same=1;

    //compare the files
    while(!feof(fp1)){
        ch1=fgetc(fp1);
        if(ferror(fp1)){
            printf("Error reading first file");
            exit(1);
        }
        ch2=fgetc(fp2);
        if(ferror(fp2)){
            printf("Error reading second file");
            exit(1);
        }
        if(ch1!=ch2){
            printf("Files differ at byte number %lu", l);
            same=0;
            break;
        }
        l++;
    }
    if(same) printf("Files are same");

    if(fclose(fp1)==EOF){
        printf("Error closing first file");
        exit(1);
    }

    if(fclose(fp2)==EOF){
        printf("Error closing second file");
        exit(1);
    }

}
