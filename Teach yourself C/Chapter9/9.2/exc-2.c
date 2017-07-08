#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main(int argc, char *argv[]){

    int count[26];
    FILE *fp;
    char ch;
    int i;

    for(i=0; i<26; i++) count[i]=0;

    if(argc!=2){
        printf("Incorrect arguments\n");
        exit(1);
    }

    if((fp=fopen(argv[1], "r"))==NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    while((ch=fgetc(fp))!=EOF){
        ch=toupper(ch);
        if(ch>='A' && ch<='Z') count[ch-'A']++;
    }

    for(i=0; i<26; i++)
        printf("%c occurred %d times \n", i+'A', count[i]);

}
