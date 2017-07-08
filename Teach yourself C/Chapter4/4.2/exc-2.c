#include<stdio.h>

void soundspeed(float distance);

void main(){

    float distance;

    printf("Enter distance in feet: ");
    scanf("%f", &distance);
    soundspeed(distance);

}

soundspeed(float distance){
    printf("Travel timel: %f", distance/1129);
}
