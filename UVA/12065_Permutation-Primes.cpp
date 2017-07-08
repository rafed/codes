#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 1111111

bool prime[MAX];

int main()
{
	memset(prime, true, sizeof(prime));

	prime[0] = prime[1] = false;

	for(int i=4; i<MAX; i+=2)
		prime[i] = false;

	for(int i=3; i*i<MAX; i+=2){
		if(prime[i]){
			for(int j=i*i; j<MAX; j+=2*i)
				prime[j] = false;
		}
	}

	int N;
	scanf("%d", &N);

	int r1, r2, permute, counter, difference, length;
	char permuteArray[10];

	for(int i=1; i<=N; i++)
	{
		counter = 0;
		scanf("%d %d", &r1, &r2);
		if(r1 > r2) swap(r1, r2);

		for(int j=r1; j<=r2; j++)
		{
			sprintf(permuteArray, "%d", j);
			length = strlen(permuteArray);

			sort(permuteArray, permuteArray + length);

			do{
				permute = atoi(permuteArray);
				if(permute == j) continue;

				difference = abs(j - permute)/9;
				if(difference<1111111 && prime[difference]){
					counter++;
					break;
				}

			} while(next_permutation(permuteArray, permuteArray + length));
		}
		printf("Case %d: %d\n", i, counter);
	}

	return 0;
}
