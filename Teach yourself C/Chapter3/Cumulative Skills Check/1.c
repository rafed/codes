#include<stdio.h>
#include<conio.h>

void main(){

    char ch;

    printf("Enter keystrokes: ");

    do{
        ch=getche();
        switch(ch){
            case '\r': printf("Newline\n");
                break;
            case '\t': printf("Tab\n");
                break;
            case '\b': printf("Backspace\n");
        }
    } while(ch!='q');

}
