#include<stdio.h>

int main(){

    int i, j, prime;

    for(i=1; i<1001; i+=2){
            prime=0;
        for(j=3; j<i/2; j+=2){
            if(i%j!=0) prime=1;
            if (prime) printf("%d \n", i);
            break;
        }
    }

    return 0;

}

//Coded by Rafed.
