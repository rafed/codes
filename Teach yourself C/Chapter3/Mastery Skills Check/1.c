#include<stdio.h>
#include<conio.h>

int main(){

    char ch, junk;

    printf("Enter lowercase letters: ");
    do{
        ch=getche();
        printf("%c", ch-32);
    } while(ch!='\r');

    return 0;

}

//Coded by Rafed.
