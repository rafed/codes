#include<stdio.h>

int main(){

    long long int N, input, i, j, temp , sum, track;

    scanf("%lld", &N);
    for(i=0; i<N; i++){
        track=0;
        scanf("%lld", &input);
        for(j=input-100; j<=input; j++){
            sum=0;
            temp=j;
            while(temp!=0){
                sum+=temp%10;
                temp/=10;
            }
            sum+=j;
            if(sum==input){
                printf("%lld\n", j);
                track=1;
                break;
            }
        }
        if(!track) printf("0\n");
    }

    return 0;

}
