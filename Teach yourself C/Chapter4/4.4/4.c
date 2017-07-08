#include<stdio.h>

int x=10; //initialize global variable
int myfunc(int i);

void main(){

    int y=x;

    int z=myfunc(y);

    printf("%d %d", y, z);

}

int myfunc(int i){
    return i/2;
}
