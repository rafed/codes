#include<stdio.h>
#include<stdlib.h>

int main(){

    char str[80]="This is a file system test.\n";
    FILE *fp;
    char ch, *p;

    //open myfile
    if((fp=fopen("myfile", "w"))==NULL){
        printf("Cannot open file,\n");
        exit(1);
    }

    //write str to disk
   p=str;
   while(*p){
        if(fputc(*p++, fp)==EOF){
            printf("Error writing file.\n");
            exit(1);
        }
    }

    fclose(fp);

    //open myfile for input
    if((fp=fopen("myfile", "r"))==NULL){
        printf("Cannot open file,\n");
        exit(1);
    }

    //read the file back
    while((ch=fgetc(fp))!=EOF) putchar(ch);
    fclose(fp);

    return 0;
}
