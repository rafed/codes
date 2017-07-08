#include<stdio.h>

int main (void) {

	int i;
	
	printf("\nEnter number to check if it's odd or even:\n");
	scanf("%d", &i);
	
	if(i%2==0) {
		printf("The number is even\n");
	} else {
		printf("The number is odd\n");
	}
	
	return 0;
	
}

//Coded by Rafed.
