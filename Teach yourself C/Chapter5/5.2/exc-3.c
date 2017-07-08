#include<stdio.h>
#include<string.h>

void main(){

    char bigstr[1000], str[80];

    printf("Enter strings to make a big string or enter quit.\n");

    for(;;){
        gets(str);
        if(!strcmp(str, "quit")) break;
        else strcat(bigstr, str);
        if(strlen(bigstr)+strlen(str)>=1000)break;
    }

    printf("%s", bigstr);

}
