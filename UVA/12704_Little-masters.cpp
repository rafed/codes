#include<cstdio>
#include<cmath>

int main(){

    int N;
    float x, y, r, result;;

    scanf("%d", &N);
    while(N--){
        scanf("%f %f %f", &x, &y, &r);
        result=sqrt(x*x+y*y);
        printf("%.2f %.2f\n", r-result, r+result);
    }

    return 0;

}
