#include<stdio.h>

void main(){

    char *p1="one";
    char *p2="two";
    char *p3="three";

    printf("%s %s %s\n", p1, p2, p3);
    printf("%s %s %s\n", p1, p3, p2);
    printf("%s %s %s\n", p2, p1, p3);
    printf("%s %s %s\n", p2, p3, p1);
    printf("%s %s %s\n", p3, p1, p2);
    printf("%s %s %s\n", p3, p2, p1);

}
