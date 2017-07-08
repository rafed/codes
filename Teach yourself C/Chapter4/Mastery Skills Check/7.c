#include<stdio.h>

int series();

int num=21;

void main(){

    int i;

    for(i=0; i<10; i++){
        printf("%d \n", series());
    }

}

int series(){
    num=(num*1468)%467;
    return num;
}
