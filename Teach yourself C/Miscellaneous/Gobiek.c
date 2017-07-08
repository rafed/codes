#include<stdio.h>

float gobiek (int x, int y);
int add (int x, int y);
float mean (int x);
float subtract (float x);

void main (void) {
    int p, q;
    float r;

    printf("\n Enter two numbers to gobiek: ");
    scanf("%d %d", &p, &q);

    r=gobiek(p, q);
    printf("The gobiek of %d and %d is %f", p, q, r);
}

float gobiek (int x, int y) {
    int a;
    float b, c;

    a=add(x, y);
    b=mean(a);
    c=subtract(b);

    return c;
}

int add (int x, int y) {
    int res;
    res=x+y;
    return res;
}


float mean (int x) {
    float res;
    res=((float)x/2);
    return res;
}

float subtract (float x) {
    float res;
    res=(x-1);
    return res;
}

//Coded by Rafed.
