#include<stdio.h>
#include<conio.h>

int main(){

    float i;
    char ch;

    printf("(y/n) to continue or end: \n");
    for(i=1; i<101; i++){
        printf("%.0f$\t %.2f$\t %.2f$\t %.2f$\t", i, .10*i, .15*i, .20yy*i);
        ch=getche();
        if(ch=='n') break;
        printf("\n");
    }

    return 0;

}

//Coded by Rafed.
