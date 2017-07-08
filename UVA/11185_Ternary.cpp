#include <cstdio>

typedef long long int INT;

int main(){

	INT input;
	int array[40];

	for(int i=0; i<100; i++)
	{
		scanf("%lld", &input);
		if(input < 0) break;
		if(input == 0){
			printf("0\n");
			continue;
		}
		
		int counter = 0;
		
		while(input != 0)
		{
			array[counter] = input % 3;
			input /= 3;
			counter++;
		}
		for(int j=counter-1; j>=0; j--)
		{
			printf("%d", array[j]);
		}
		printf("\n");
	}

	return 0;

}
