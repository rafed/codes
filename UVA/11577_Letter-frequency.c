#include<stdio.h>

int main(){

    char str[201];
    int i, N, letter[26], max;

    scanf("%d", &N);
    getchar();
    while(N--){
        max=0;
        gets(str);
        for(i=0; i<26; i++) letter[i]=0;
        for(i=0; str[i]!='\0'; i++){
            if(str[i]>='A' && str[i]<='Z') str[i]+=32;
            if(str[i]>='a' && str[i]<='z')letter[str[i]-97]++;
        }
        for(i=0; i<26; i++){
            if(letter[i]>max) max=letter[i];
        }
        for(i=0; i<26; i++){
            if(letter[i]==max) printf("%c", i+97);
        }
        printf("\n");
    }


    return 0;

}
