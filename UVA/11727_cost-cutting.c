#include<stdio.h>

int main(){

    int i, N;
    long int a, b, c;

    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%ld %ld %ld", &a, &b, &c);
        if(a<b && b<c) printf("Case %d: %ld\n", i, b);
        else if(a<c && c<b) printf("Case %d: %ld\n", i, c);
        else if(b<a && a<c) printf("Case %d: %ld\n", i, a);
        else if(b<c && c<a) printf("Case %d: %ld\n", i, c);
        else if(c<a && a<b) printf("Case %d: %ld\n", i, a);
        else if(c<b && b<a) printf("Case %d: %ld\n", i, b);
    }

    return 0;

}
