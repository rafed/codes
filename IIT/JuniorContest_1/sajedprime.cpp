#include <bits/stdc++.h>

using namespace std;

int main (void) {

    bool save [32000];

    for(int i=0 ; i<32000; i++) save[i]=true;

    save[0]=false;
    save[1]=false;
    for(int i=4; i<32000; i+=2) save[i]=false;

    for(int i=3 ; i<32000; i+=2) {
        if(save[i]==true) {
            for(long long int j=i*i; j<32000; j+=i) save[j]=false;
        }
    }

    int total;
    cin>>total;
    long long int a,b;

    for(int i=0; i<total; i++) {

        if(i) putchar('\n');
        scanf("%lld %lld", &a, &b);

        for( ; a<=b; a++) {
            int temp= (int) sqrt(a);
            int flag=1;

            for(long long int j=0; j<=temp ; j++) {
                if(save[j]==true ){
                    if( a%j==0){
                        flag=0;
                        break;
                    }
                }
            }

            if(a!=1 && flag) cout<<a<<endl;
        }
    }


    return 0;
}
