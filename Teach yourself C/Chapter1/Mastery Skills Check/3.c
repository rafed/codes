#include<stdio.h>

o_to_c(int x);

int main (void){

    int o, c;

    printf("Enter ounces to convert to cups: ");
    scanf("%d", &o);

    c=o_to_c(o);
    printf("%d ounces require %d cups.\n", o, c);

    return 0;

}

o_to_c(int x){

    int res;

    if (x%8!=0){
        res=(x/8)+1;
    } else {
        res=x/8;
    }

    return res;

}

//Coded by Rafed.
