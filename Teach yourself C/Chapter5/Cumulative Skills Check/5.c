#include<stdio.h>

void main(){

    char word[]="concatenation";
    char guess[]="_____________";
    int count=0;
    char ch, junk;
    int i, j; ///loop var

    do{
        puts(guess);
        printf("\nEnter your guess: ");
        scanf("%c", &ch);
        scanf("%c", &junk);

        for(i=0; i<strlen(word); i++){
            if(ch==word[i]) guess[i]=ch;
        }

        count++;

    } while(strcmp(word, guess) && count<15);

    if(count>=15) printf("You failed!");
    else printf("Congratulations!");

}
