#include<stdio.h>

void f();

void main(){

    f();
    f();
    f();

}

void f(){
    int i=10;
    printf("%d ", i);
}
