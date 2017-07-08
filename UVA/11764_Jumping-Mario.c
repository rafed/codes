#include<stdio.h>

int main(){

    int N, n, i, j, store[51], high, low;

    scanf("%d", &N);
    for(j=1; j<=N; j++){
        high=0, low=0;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &store[i]);
        }
        for(i=1; i<n; i++){
            if(store[i]>store[i-1]) high++;
            if(store[i]<store[i-1]) low++;
        }
        printf("Case %d: %d %d\n", j, high, low);
    }

    return 0;

}
