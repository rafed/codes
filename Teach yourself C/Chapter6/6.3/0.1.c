#include<stdio.h>

void main(){

    int a[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *p;

    p=a; //assigns the address of start of a

    //this prints a's first, second and third elemetns
    printf("%d %d %d\n", *p, *(p+1), *(p+2));

    //this also does the same
    printf("%d %d %d", a[0], a[1], a[2]);

}
