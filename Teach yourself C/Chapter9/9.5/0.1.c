#include<stdio.h>
#include<stdlib.h>

void main(){

    FILE *fp;
    int i;

    //open file for input
    if((fp=fopen("myfile.txt", "wb"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }
    i=100;
    if(fwrite(&i, sizeof(int), 1, fp)!=1){
        printf("Write error occurred.\n");
        exit(1);
    }
    fclose(fp);

    //open file for input
    if((fp=fopen("myfile.txt", "rb"))==NULL){
        printf("Cannot open file");
        exit(1);
    }

    if(fread(&i, sizeof i, 1, fp)!=1){
        printf("Read error occurred");
        exit(1);
    }
    printf("i is %d", i);
    fclose(fp);

}
