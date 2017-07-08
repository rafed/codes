#include<stdio.h>

void main(){

    char *cp, ch;
    int *ip, i;
    float *fp, f;
    double *dp, d;

    cp=&ch;
    ip=&i;
    fp=&f;
    dp=&d;

    //print the current values
    printf("%p %p %p %p\n", cp, ip, fp, dp);

    //now increment them by one
    cp++;
    ip++;
    fp++;
    dp++;

    //print their new values
     printf("%p %p %p %p\n", cp, ip, fp, dp);

}
