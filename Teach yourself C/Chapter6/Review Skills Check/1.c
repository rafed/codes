#include<stdio.h>

void main(){

    int num[10];
    int i, oddsum=0, evensum=0;

    printf("Enter 10 numbers to the array: ");
    for(i=0; i<10; i++) scanf("%d", &num[i]);

    for(i=0; i<10; i++){
        if(num[i]%2==0) evensum+=num[i];
    }

     for(i=0; i<10; i++){
        if(num[i]%2!=0) oddsum+=num[i];
    }

    printf("Sum of odds: %d \nSum of evens: %d", oddsum, evensum);

}
