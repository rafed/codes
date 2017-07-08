#include<stdio.h>

int main(){

    int n, i;
    int N, P, K, res;

    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d %d %d", &N, &K, &P);
        res=P%N;
        res+=K;
        if(res>N) res=res%N;
        printf("Case %d: %d\n", i, res);
    }

    return 0;

}
