#include<stdio.h>

int f1 (void);

int main (void) {
    double answer;

    answer = f1();
    printf("%f", answer);

    return 0;
}

int f1 (void) {
    return 100;
}

//Coded by Rafed.
