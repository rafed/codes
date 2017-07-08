#include<stdio.h>

void change(char ch);

int main(){

    char str[100];
    int i;

    while(gets(str)){
        for(i=0; str[i]!='\0'; i++) change(str[i]);
        printf("\n");
    }

    return 0;

}

void change(char ch){
    switch(ch){
        case 'B': printf("%c", 'V'); break;
        case 'C': printf("%c", 'X'); break;
        case 'D': printf("%c", 'S'); break;
        case 'E': printf("%c", 'W'); break;
        case 'F': printf("%c", 'D'); break;
        case 'G': printf("%c", 'F'); break;
        case 'H': printf("%c", 'G'); break;
        case 'I': printf("%c", 'U'); break;
        case 'J': printf("%c", 'H'); break;
        case 'K': printf("%c", 'J'); break;
        case 'L': printf("%c", 'K'); break;
        case 'M': printf("%c", 'N'); break;
        case 'N': printf("%c", 'B'); break;
        case 'O': printf("%c", 'I'); break;
        case 'P': printf("%c", 'O'); break;
        case 'R': printf("%c", 'E'); break;
        case 'S': printf("%c", 'A'); break;
        case 'T': printf("%c", 'R'); break;
        case 'U': printf("%c", 'Y'); break;
        case 'V': printf("%c", 'C'); break;
        case 'W': printf("%c", 'Q'); break;
        case 'X': printf("%c", 'Z'); break;
        case 'Y': printf("%c", 'T'); break;
        case '1': printf("%c", '`'); break;
        case '2': printf("%d", 1); break;
        case '3': printf("%d", 2); break;
        case '4': printf("%d", 3); break;
        case '5': printf("%d", 4); break;
        case '6': printf("%d", 5); break;
        case '7': printf("%d", 6); break;
        case '8': printf("%d", 7); break;
        case '9': printf("%d", 8); break;
        case '0': printf("%d", 9); break;
        case '-': printf("%d", 0); break;
        case '=': printf("%c", '-'); break;
        case '[': printf("%c", 'P'); break;
        case ']': printf("%c", '['); break;
        case '\\': printf("%c", ']'); break;
        case ';': printf("%c", 'L'); break;
        case '\'': printf("%c", ';'); break;
        case ',': printf("%c", 'M'); break;
        case '.': printf("%c", ','); break;
        case '/': printf("%c", '.'); break;
        case ' ': printf("%c", ' '); break;
    }
}
