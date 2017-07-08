#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc, char *argv[]){

    FILE *fp;
    double ld;
    int d;
    char str[80];;

    //check for command line arg
    if(argc!=2){
        printf("Specify the file name");
        exit(1);
    }

    //open file for output
    if((fp=fopen(argv[1], "w"))==NULL){
        printf("Error opening file");
        exit(1);
    }

    fprintf(fp, "%f %d %s", 1234.234, 1908, "hello");
    fclose(fp);

    //open file for input
    if((fp=fopen(argv[1], "r"))==NULL){
        printf("Cannot open file");
        exit(1);
    }

    fscanf(fp, "%lf%d%s", &ld, &d, str);
    printf("%f %d %s", ld, d, str);
    fclose(fp);

}
