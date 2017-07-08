#include<stdio.h>

void main(){

    unsigned long int s;

    printf("Enter distance: ");
    scanf("%lu", &s);
    printf("It takes light %d seconds to travel this distance.", s/186000);

}
