#include<stdio.h>
#include<math.h>

void main (void){

    unsigned long long int input=600851475143;
    int i, j;
    int lprime=3;
    short int count=1;

    for(i=3; i<sqrt(input); i+=2){
        if((input%i)==0){
            for(j=3; j<sqrt(i); j+=2){
                if(i%j==0){
                    count=0;
                    break;
                }
            }
            if(count) lprime=i;
        }
        count=1;
    }

    printf("Largest prime is %d", lprime);


}
//Coded by Rafed.
