#include<stdio.h>

int milecalc(int x);
int juicecalc(int x);

int main(){

    int N, num, input, mile, juice, i, j;

    scanf("%d", &N);
    for(i=1; i<=N; i++){
        mile=0;
        juice=0;
        scanf("%d", &num);
        for(j=0; j<num; j++){
            scanf("%d", &input);
            mile+=milecalc(input);
            juice+=juicecalc(input);
        }
        if(mile<juice) printf("Case %d: Mile %d\n", i, mile);
        else if(mile==juice) printf("Case %d: Mile Juice %d\n", i, juice);
        else if(mile>juice) printf("Case %d: Juice %d\n", i, juice);
    }

    return 0;

}

int milecalc(int x){
    return (x/30)*10+10;
}
int juicecalc(int x){
    return (x/60)*15+15;
}
