#include<stdio.h>

void main(){

    char digits[][10]={
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num>=0 && num<10) printf("%s", digits[num]);

}
