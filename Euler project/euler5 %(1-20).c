#include<stdio.h>

int main (void){

    unsigned long long int i, n, ans=0;

    for(i=20; i>=20; i+=20){
        n=20;
        while(i%n==0){
            n--;
            if(n==0) {
                ans=1;
                printf("The number divisible by all the numbers from 1-20 is %llu \n", i);
                break;
            }
        }
        if(ans==1) break;
    }

    return 0;

}

//Coded by Rafed.
