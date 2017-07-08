#include<stdio.h>

int main(){

     int i;

     for(i=1; i<11; i++){
        printf("%d  ", i);
     }
     printf("\n");

     i=1;
     while(i<11){
        printf("%d  ", i);
        i++;
     }
     printf("\n");

     i=1;
     do{
        printf("%d  ", i);
        i++;
     } while(i<11);

     return 0;
}

//Coded by Rafed.
