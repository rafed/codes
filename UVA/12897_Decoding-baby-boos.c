#include <stdio.h>

int main(){

    int N;
    long long int n, i;
    char str[1000002], change[128], ch1, ch2;

    scanf("%lld", &N);
    getchar();
    while(N--){
        gets(str);
        scanf("%lld", &n);
        getchar();
        for(i='A'; i<128; i++){
            change[i]=i;
        }
        while(n--){
            scanf("%c %c", &ch1, &ch2);
            getchar();
            for(i='A'; i<='Z'; i++){
                if(change[i]==ch2) change[i]=ch1;
            }
        }
        for(i=0; str[i]; i++){
            putchar(change[str[i]]);
        }
        printf("\n");
    }

    return 0;

}
