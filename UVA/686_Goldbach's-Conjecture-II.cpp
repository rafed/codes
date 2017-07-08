#include <cstdio>
#include <cmath>
#include <cstring>

#define MAX 32770

int main()
{
	bool primes[MAX];

	memset(primes, true, sizeof(primes));
	primes[0] = primes[1] = false;

	for(int i=4; i<MAX; i+=2)
		primes[i] = false;

	for(int i=3; i<MAX; i+=2){
		if(primes[i]){
			for(int j=i*i; j<MAX; j+=i)
				primes[j] = false;
		}
	}

	int input, counter;

	while(scanf("%d", &input) && input)
	{
		counter = 0;
		for(int i=1; i<=input/2; i++){
			if(primes[i] && primes[input-i]){
				counter++;
			}
		}
		printf("%d\n", counter);
	}

	return 0;
}
