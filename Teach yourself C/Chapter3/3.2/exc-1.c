#include<stdio.h>

int main(){

    float area, l, b, h, r;
    char choice;

    printf("Whose area would you like to calculate? \nTriangle Rectangle Circle \nEnter first letter of choice: ");
    choice=getchar();

    if((choice=='T')||(choice=='t')){
        printf("Enter base and height: ");
        scanf("%f %f", &b, &h);
        printf("Area of the triangle is %.2f sq units.", b*h/2);
    } else if((choice=='R')||(choice=='r')){
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);;
        printf("The area of the rectangle is %.2f sq units.", l*b);
    } else if((choice=='C')||(choice=='c')){
        printf("Enter radius of the circle: ");
        scanf("%f", &r);
        printf("Area of the circle is %.2f sq units.", 3.14*r*r);
    }

    return 0;

}

//Coded by Rafed.
