#include<stdio.h>

int main(){

    unsigned long long int i, j, sum=2;
    short int is_prime;

    for(i=3; i<2000000; i+=2){
        is_prime=1;
        for(j=3; j<i/2; j+=2){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime==1){
            printf("%llu \n", i);
            sum+=i;
        }
    }

    printf("The sum of primes under 2000000 is %llu", sum); //142913828922

    return 0;

}
//Use Sieve of Eratosthenes to solve under 10 secs.

//Coded by Rafed.
