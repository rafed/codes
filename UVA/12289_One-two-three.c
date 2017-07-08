#include<stdio.h>
#include<string.h>

int main(){

    int N, one;
    char str[6];

    scanf("%d", &N);
    while(N--){
        one=0;
        scanf("%s", str);
        if(strlen(str)==3){
            if(str[0]=='o') one++;
            if(str[1]=='n') one++;
            if(str[2]=='e') one++;
            if(one>=2)printf("1\n");
            else printf("2\n");
        }
        else printf("3\n");
    }

    return 0;

}
