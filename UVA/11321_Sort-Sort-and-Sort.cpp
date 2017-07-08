#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long int ll;

int N, M;

bool moduloSort(int i, int j)
{
	if(i%M != j%M) return (i%M < j%M); /*unequal*/
	if(i%2 == 0 && j%2 == 0) return (i<j); /*all even*/
	if(i%2 != 0 && j%2 != 0) return (i>j); /*all odd*/
	if(i%2 != 0) return true; /*odd even*/
	else return false; /*even odd*/
}

int main()
{
    while(scanf("%d %d", &N, &M))
	{
		printf("%d %d\n", N, M);
		if(!N && !M) break;

		ll arr[N];
		for(int i=0; i<N; i++)
			scanf("%lld", &arr[i]);

		sort(arr, arr+N, moduloSort);

		for(int i=0; i<N; i++)
			printf("%lld\n", arr[i]);

	}

	return 0;
}
