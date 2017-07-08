#include<stdio.h>

void main(){

    long l;
    short h;
    double d;

    printf("Enter a long, a short and a double (seperated by a space): ");
    scanf("%ld", &l);
    scanf("%hds", &h);
    scanf("%lf", &d);
    printf("Long: %ld\nShort: %hd\nDouble: %lf", l, h, d);

}
