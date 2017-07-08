#include <stdio.h>

int main(){

    float l, b, h, w;
    int count=0, N;

    scanf("%d", &N);
    while(N--){
    scanf("%f %f %f %f", &l, &b, &h, &w);
        if(w<=7){
            if((l<=56 && b<=45 && h<=25) || (l+b+h<=125)){
                printf("%d\n", 1);
                count++;
            }
            else printf("%d\n", 0);
        }
        else printf("%d\n", 0);
    }
    printf("%d\n", count);

    return 0;

}
