#include<stdio.h>

void main(){

    int i, *j;
    j=&i;

    for(i=0; i<10; i++){
        printf("%d\n", *j);
    }

}
