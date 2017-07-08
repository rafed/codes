#include<stdio.h>

void main(){

    int i;
    float j, k;

    for(k=0; k<10; k++){
        printf("Enter first number: ");
        scanf("%f", &j);
        printf("Enter second number: ");
        scanf("%f", &k);

        if(!j) printf("Undefined");
        else printf("%.2f\n", j/k);
    }

}
