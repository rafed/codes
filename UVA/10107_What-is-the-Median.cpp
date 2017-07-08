#include <cstdio>

typedef long long int ll;

int main()
{
	ll arr[10010], temp;
	int counter = 0, i;

	while(scanf("%lld", &arr[counter])==1)
	{
		i = counter;
		while(arr[i]<arr[i-1] && counter != 0)
		{
			temp = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = temp;
			i--;
		}
		counter++;
		if(counter & 1)
			printf("%lld\n", arr[counter/2]);
		else
			printf("%lld\n", (arr[counter/2]+arr[counter/2-1])/2);
	}

	return 0;
}
