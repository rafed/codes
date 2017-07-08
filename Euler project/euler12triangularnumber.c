#include<stdio.h>
#include<math.h>

void main(){

    long long int series_num=0;
    long long int i, j;
    int count=1, gcount=0;
    long long int num;
    long int root;

    for(i=1; ;i++){
        series_num+=i;
        root=sqrt(series_num);
        for(j=1; j<root; j++){
            if(series_num%j==0) count+=2;
        }
        if(count>gcount){
            gcount=count;
            num=series_num;
            if(gcount>500) break;

        }

        count=1;

    }

    printf("The number is %lld", num);

}

//Coded by Rafed.
