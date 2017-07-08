#include<stdio.h>

int main(){

    char str[100];
    char ch;
    int i;

    while(gets(str)){
        for(i=0; str[i]!='\0'; i++){
            ch=(str[i]);
            printf("%c",ch-7);
        }
        printf("\n");
    }

    return 0;

}
