#include<stdio.h>

int main(){

    int i, j;
    char ch, junk;

    for(i=0; i<10; i++){
        printf("Enter character: ");
        scanf("%c", &ch);
        scanf("%c", &junk);
        for(j=0; j<ch; j++) printf("%c", '.');
        printf("\n");
    }

    return 0;

}

//Coded by Rafed.

