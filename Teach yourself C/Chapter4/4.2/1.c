#include<stdio.h>

void f1();

int count; //global count

void main(){

    count=10;
    f1();
    printf("Count in main(): %d\n", count);

    return 0;

}

void f1(){
    int count;

    count=100;
    printf("count in f1(): %d\n", count);
}
