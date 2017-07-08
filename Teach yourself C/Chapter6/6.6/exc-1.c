#include<stdio.h>

void main(){

    int i, *p, **q;
    p=&i;
    q=&p;

    printf("Address of i: %p\nAddress of *p: %p\nAddress of **q: %p", &i, p, q);

}
