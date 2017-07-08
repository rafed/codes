#include<stdio.h>

void main(){

    int items[10];
    int i;

    for(i=0; i<10; i++){
        items[i]=i+1;
    }

    for(i=0; i<10; i++) printf("%d\n", items[i]);

}
