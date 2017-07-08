#include<stdio.h>

void main(){

	int *p, q;

	p=&q;

	*p=199;

	printf("q's value is %d", q);

}
