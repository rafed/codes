#include<stdio.h>
#include<stdlib.h>

/*int atoi(char *str);
double atof(char *str);
long atol(*char str);
*/

void main(int argc, char *argv[]){

    int i;
    double d;
    long l;

    i=atoi(argv[1]);
    l=atol(argv[2]);
    d=atof(argv[3]);

    printf("%d %ld %f", i, l, d);

}
