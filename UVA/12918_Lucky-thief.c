#include<stdio.h>

int main(){

    long long int N, n, m, res, i;

    scanf("%lld", &N);
    while(N--){
        res=0;
        scanf("%lld %lld", &n, &m);
        n-=m;
        m--;
        res=(m*(m+1)/2)-(n*(n+1)/2);
        printf("%lld\n", res);
    }

    return 0;

}
