#include<stdio.h>

int main (void){

    long long int i, j;
    short int is_prime;
    int count=1;

    for(i=3; i>0; i+=2){
        is_prime=1;
        for(j=3; j<i/2; j+=2){
            printf("%lld\n", j);
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if (is_prime==1) count++;
        if (count==10001){
            break;
        }
    }

    printf("The 10001st prime is %lld", i);

    return 0;

}

//Coded by Rafed.
