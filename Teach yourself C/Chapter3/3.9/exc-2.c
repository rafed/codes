#include<stdio.h>
#include<conio.h>

int main(){

    int input, ch=0, punc=0, num=0;

    do{
        input=getche();

        switch(input){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                num++;
                break;
            case '.':
            case ',':
            case ';':
            case ':':
            case '\'':
            case '"':
            case '<':
            case '>':
            case '?':
            case '/':
                punc++;
                break;
            default:
                ch++;
                break;
        }
    } while(input!='\r');

    printf("\nDigits: %d, Characters: %d, Punctuations: %d", num, ch, punc);

    return 0;

}
