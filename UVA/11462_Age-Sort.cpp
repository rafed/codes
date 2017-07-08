#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, arr[2000001];
	
	while(scanf("%d", &N) == 1 && N){
		for(int i=0; i<N; i++){
			scanf("%d", &arr[i]);
		}
		
		sort(arr, arr+N);
		
		for(int i=0; i<N-1; i++){
			printf("%d ", arr[i]);
		}
		printf("%d\n", arr[N-1]);
	}

	return 0;
}
