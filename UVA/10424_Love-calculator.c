#include<stdio.h>

int main(){

    char str1[26], str2[26];
    int i, name1, name2, temp;
    float res;

    while(gets(str1)){
        gets(str2);
        name1=name2=temp=0;
        for(i=0; str1[i]!='\0'; i++){
            if(str1[i]>='A' && str1[i]<='Z'){
                name1+=str1[i]-64;
            }
            if(str1[i]>='a' && str1[i]<='z'){
                name1+=str1[i]-96;
            }
        }
        for(i=0; str2[i]!='\0'; i++){
            if(str2[i]>='A' && str2[i]<='Z'){
                name2+=str2[i]-64;
            }
            if(str2[i]>='a' && str2[i]<='z'){
                name2+=str2[i]-96;
            }
        }
        while(name1>9){
            temp=0;
            while(name1>0){
                temp+=name1%10;
                name1/=10;
            }
            name1=temp;
        }
        while(name2>9){
            temp=0;
            while(name2>0){
                temp+=name2%10;
                name2/=10;
            }
            name2=temp;
        }
        if(name1<=name2) res=(float)name1/name2*100;
        if(name2<name1) res=(float)name2/name1*100;
        printf("%.2f %%\n", res);
    }

    return 0;

}
