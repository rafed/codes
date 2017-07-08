#include<stdio.h>

int main (void) {

	float a, c, res;
	char b;
	
	printf("Enter your numbers to operate:");
	scanf("%f %f", &a, &c);
	
	printf("What operation will be done? +, -, *, / \n");
	scanf("%c", &b);
	scanf("%c", &b);
	
	if (b=='+') {
		res=(a+c);
		printf("%f\n", res);
	} else if (b=='-') {
		res=(a-c);
		printf("%f\n", res);
	} else if (b=='*') {
		res=(a*c);
		printf("%f\n", res);
	} else if (b=='/') {
		res=(a/c);
		printf("%f\n", res);
	} else {
		printf("Invalid operator\n");
	}
	
	return 0;
	
}
