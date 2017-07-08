#include<stdio.h>
#include<string.h>

void main(){

    char *p[3]={"Yes", "No","Maybe. Rephrase the question"};
    char ques[80];

    printf("Enter a question: ");
    gets(ques);

    printf(p[strlen(ques)%3]);

}
