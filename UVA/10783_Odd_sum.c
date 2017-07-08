#include<stdio.h>

int main(){

    int i, j, num, start, end, total=0;

    scanf("%d", &num);
    for(i=1; i<=num; i++){
        scanf("%d %d", &start, &end);
        for(j=start; j<=end; j++){
            if(j%2!=0) total+=j;
        }
        printf("Case %d: %d\n", i, total);
        total=0;
    }
    return 0;
}
