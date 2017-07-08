#include<stdio.h>

void main(){

    int i, *p;
    p=&i;

    *p=100;

    printf("%d", i);

}
