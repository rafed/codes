#include<stdio.h>

int main(){

	unsigned long long int a, b, counter;
	int x, y, carry, extra;

	while(scanf("%lld %lld", &a, &b) && (a || b)){
        counter=0;
        extra=0;
        while(a || b){
			x=a%10;
			y=b%10;
			carry=x+y+extra;
			if(carry>9){
				extra=carry/10;
				counter++;
			}
			else extra=0;
			a/=10;
			b/=10;
        }
        if(counter==0) printf("No carry operation.\n");
        else if(counter==1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n", counter);
	}

	return 0;

}
