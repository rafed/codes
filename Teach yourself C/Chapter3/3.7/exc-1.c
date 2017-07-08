#include<stdio.h>

int main(){

    int i, j, k;

    for(i=0; i<10; i++){
        if(i==6) break;
        printf("%d", i);
    }

    printf("\n");

    j=10;
    while(j){
        printf("%d", j);
        j--;
        if(j==5) break;
    }

    printf("\n");

    k=10;
    do{
        printf("ha ");
        k--;
    } while(k);

    return 0;

}

//Coded by Rafed.
