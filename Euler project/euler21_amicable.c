#include<stdio.h>

void main(){

    int i, j;
    long long int amicheck1=0, amicheck2=0, amisum=0;

    for(i=1; i<10000; i++){
        for(j=1; j<=i/2; j++){
            if(i%j==0) amicheck1+=j;
        }
        for(j=1; j<=amicheck1/2; j++){
            if(amicheck1%j==0) amicheck2+=j;
        }
        if(i==amicheck2 && amicheck1!=amicheck2){
            amisum+=i;
            printf("%d %lld %lld\n", i, amicheck1, amicheck2);
        }

        //fprintf(fp, "%d %lld %lld\n", i, amicheck1, amicheck2);

        amicheck1=0;
        amicheck2=0;
    }

    printf("The sum is %lld", amisum);

}
