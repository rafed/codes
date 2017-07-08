#include<stdio.h>

int main(){

    char str[10];
    long long int i;

    for(i=1; ; i++){
        scanf("%s", str);
        if(str[0]=='H') printf("Case %d: Hajj-e-Akbar\n", i);
        if(str[0]=='U') printf("Case %d: Hajj-e-Asghar\n", i);
        if(str[0]=='*') break;
    }

    return 0;

}



