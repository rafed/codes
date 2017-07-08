#include<stdio.h>

int main(){

    char str[601];
    int N, i, total;
    int M, A, R, G, I, T;

    while(scanf("%d", &N)==1){
        getchar();
        while(N--){
            total=0;
            i=0;
            M=A=R=G=I=T=0;
            gets(str);
            while(str[i]!='\0'){
                if(str[i]=='M') M++;
                else if(str[i]=='A') A++;
                else if(str[i]=='R') R++;
                else if(str[i]=='G') G++;
                else if(str[i]=='I') I++;
                else if(str[i]=='T') T++;
                i++;
            }
            while(M>=1 && A>=3 && R>=2 && G>=1 && I>=1 && T>=1){
                total++;
                M-=1;
                A-=3;
                R-=2;
                G-=1;
                I-=1;
                T-=1;
            }
            printf("%d\n", total);
        }
    }

    return 0;

}
