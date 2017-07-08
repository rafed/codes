#include<stdio.h>

void main(){

    unsigned long long int i, j;
    unsigned long long int count=0, gcount=0;
    unsigned long long int num;

    for(i=4; i<1000000; i++){
        j=i;
        while(j!=1){
            if(j%2!=0) j=3*j+1;
            else j/=2;
            count++;
        }
        if(count>gcount){
            gcount=count;
            num=i;
        }
        count=0;

    }

    printf("%llu", num);

}
