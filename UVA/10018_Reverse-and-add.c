#include<stdio.h>

unsigned long long int reverse(unsigned long long int x){
    register unsigned long long int y=0;
    while(x!=0){
        y*=10;
        y+=(x%10);
        x/=10;
    }
    return y;
}

int main(){

    unsigned long long int input;
    int count, N;

    scanf("%d", &N);
    while(N--){
        count=0;
        scanf("%llu", &input);
        while(input!=reverse(input)){
            input+=reverse(input);
            count++;
        }
        printf("%d %llu\n", count, input);
    }

    return 0;

}
