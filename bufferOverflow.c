#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *place;
	char *command;
	
	place = (char*)malloc(10);
	command = (char*)malloc(128);
	
	printf("Place mem address: %d\n", place);
	printf("Command mem address: %d\n", command);
	
	printf("Space in mem between: %d\n", command-place);
	printf("Enter: ");
	gets(place);
	system(command);
}
