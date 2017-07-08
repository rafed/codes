#include<stdio.h>

void main(){

    int i=1;

    for(; i<10; i++){
        printf("%d ", i);
    }
    printf(" ");
    i=1;
    while(i!=11){
        printf("%d ", i);
        i++;
    }
    printf(" ");
    i=1;
    do{
        printf("%d ", i);
        i++;
    } while(i!=11);
}
