#include<cstdio>
#include<cmath>

int main(){

    long long int a, b, counter, i, root;

    while(scanf("%lld %lld", &a, &b)==2){
        if(a==0 && b==0) break;
        counter=0;
        for(i=a; i<=b; i++){
            root=sqrt(i);
            if((root*root)==i) counter++;
        }
        printf("%lld\n", counter);
    }

    return 0;

}
