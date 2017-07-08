/*This program converts Earth days to Jovian years*/

#include<stdio.h>

int main (void) {

    float e_days; /*number of Earth days*/
    float j_years; /*equivalent number of jovian years*/

    /*get number of Earth days*/
    printf("Enter number of Earth days: ");
    scanf("%f", &e_days);

    /*now compute Jovian years*/
    j_years = e_days/(365 * 12.0);

    /*display the answers*/
    printf("Equivalent Jovian years: %f", j_years);

    return 0;
}

//Coded by Rafed.
