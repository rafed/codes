#include <cstdio>

int main()
{
	int T;
	scanf("%d", &T);

	while(T--)
	{
		int minimum = 150, maximum = -1, temp;
		int N;
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			scanf("%d", &temp);
			if(temp < minimum) minimum = temp;
			if(temp > maximum) maximum = temp;
		}

		printf("%d\n", (maximum-minimum)*2);
	}

	return 0;
}
