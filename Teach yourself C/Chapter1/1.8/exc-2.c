#include<stdio.h>

int convert (void);

int main (void) {
    int dollar;
    dollar = convert();
    printf("%d pounds.", dollar);
}

int convert (void) {
    int dollar;
    printf("Enter amount in dollar: ");
    scanf("%d", &dollar);
    dollar = dollar*2;
    return dollar;
}

//Coded by Rafed.
