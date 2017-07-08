#include<stdio.h>

int main(){

    long long int ans, sum_of_squares, sum, square_of_sum, input;

    printf("Enter number to find sum square difference: ");
    scanf("%lld", &input);
    int n=input;

    sum_of_squares=(n*(n+1)*(2*n+1))/6;
    sum=(n*(n+1))/2;
    square_of_sum=sum*sum;
    ans= sum_of_squares - square_of_sum;

    printf("Sum square difference is %lld \n", ans);

    return 0;

}

//Coded by Rafed.
