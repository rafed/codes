#include<stdio.h>

void main(){

    float *fp, **mfp, val;

    fp=&val;
    mfp=&fp;

    **mfp=123.903;
    printf("%f  %f", val, **mfp);

}
