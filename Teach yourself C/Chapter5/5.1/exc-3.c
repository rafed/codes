#include<stdio.h>

void main(){

    float item[100];

    int a, b, t;
    int count;

    printf("How many numbers?");
    scanf("%d", &count);

    //read in numbers
    for(a=0; a<count; a++) scanf("%f", &item[a]);

    //sorting using bubble sort
    for(a=1; a<count; a++){
        for(b=count-1; b>=a; b--){
            if(item[b-1]>item[b]){
                //exchange elements
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    }

    //Display sorted list
    for(t=0; t<count; t++) printf("%.2f  ", item[t]);

}

//Coded by Rafed.
