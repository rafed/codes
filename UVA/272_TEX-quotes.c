#include<stdio.h>

int main(){

    char ch;
    int count=0;

    while(scanf("%c", &ch)==1){
        if(ch=='"'){
            if(!count){
                printf("``");
                count++;
            }
            else{
                printf("''");
                count--;
            }
        }
        else printf("%c", ch);
    }

    return 0;

}
