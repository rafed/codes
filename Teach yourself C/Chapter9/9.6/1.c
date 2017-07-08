#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    long loc;
    FILE *fp;

    //see if file name is specified
    if(argc!=2){
        printf("File name missing.\n");
        exit(1);
    }

    if((fp=fopen(argv[1], "rb"))==NULL){
        printf("cannot open file.\n");
        exit(1);
    }

    printf("Enter byte to seek to: ");
    scanf("%ld", &loc);
    if(fseek(fp, loc, SEEK_SET)){
        printf("Seek error.\n");
        exit(1);
    }

    printf("Value at loc %ld is %d", loc, getc(fp));
    fclose(fp);

}
