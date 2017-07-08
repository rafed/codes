#include<stdio.h>

int main(){

    int N, count, c=1, i, B, W, T, A;
    char match[20];

    scanf("%d", &N);
    while(N--){
        B=0;
        W=0;
        T=0;
        A=0;
        scanf("%d", &count);
        scanf("%s", match);
        for(i=0; i<count; i++){
            if(match[i]=='B') B++;
            else if(match[i]=='W') W++;
            else if(match[i]=='T') T++;
            else if(match[i]=='A') A++;
        }
        if(A==count) printf("Case %d: ABANDONED\n", c);
        else if(B+A==count && B!=0) printf("Case %d: BANGLAWASH\n", c);
        else if(W+A==count && W!=0) printf("Case %d: WHITEWASH\n", c);
        else if(B>W) printf("Case %d: BANGLADESH %d - %d\n", c, B, W);
        else if(W>B) printf("Case %d: WWW %d - %d\n", c, W, B);
        else if(B==W) printf("Case %d: DRAW %d %d\n", c, B, T);
        ++c;
    }

    return 0;

}
