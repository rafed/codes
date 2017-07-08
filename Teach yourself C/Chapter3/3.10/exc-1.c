#include<stdio.h>

int main(){

    int i=1;

    start:
    if(i>10) goto finish;
    printf("%d ", i);
    i++;
    goto start;
    finish:;

    return 0;

}

//Coded by Rafed.
