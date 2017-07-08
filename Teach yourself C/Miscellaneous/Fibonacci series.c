#include<stdio.h>

int main (void) {

    int a=1, b=1, c=1, i;

    for (i=1;i<100;i++) {
        printf("%d\n", c);
        c=a+b;
        a=b;
        b=c;
        if (c>1000) {
            break;
        }
    }
    return 0;
}

//Coded by Rafed.
