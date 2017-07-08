#include<stdio.h>

void main(){

    if(rename("myfile.txt", "yourfile.txt"))
        printf("Rename failed.\n");
    else
        printf("Rename successful.\n");

}
