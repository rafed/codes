#include<stdio.h>

int main (void) {

    int a=1, b=1, c, count=1, total=0;

    while (count) {
        printf("%d\n", c);
        c=a+b;
        a=b;
        b=c;
        if (c>4000000) {
            break;
        }
        if(c%2==0) total=total+c;

    }
    printf("Sum of even fibonacci numbers is %d \n", total);
    return 0;

}

//Coded by Rafed.
