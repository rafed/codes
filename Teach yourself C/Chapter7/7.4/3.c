#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    double pounds;

    if(argc!=2){
        printf("Usage: CONVERT <ounces>\n");
        printf("Try again");
        exit(1);
    }
    else{
        pounds=atof(argv[1])/16.0;
        printf("%f pounds", pounds);
    }

    return 0;

}
