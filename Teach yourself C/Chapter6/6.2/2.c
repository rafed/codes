#include<stdio.h>

void main(){

    int *p, q;
    p=&q;
    q=1;

    printf("%p\n", p);

    *p++; //this will not increment q
    printf("%d %p", q, p);

}
