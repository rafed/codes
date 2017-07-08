#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int T, n;
	scanf("%d", &T);
	
	int arr[20002], discount;
	
	while(T--)
	{
		scanf("%d", &n);
		
		for(int i=0; i<n; i++){
			scanf("%d", &arr[i]);
		}
		
		sort(arr, arr+n, greater<int>());
		
		discount = 0;
		
		for(int index=2; index<n; index+=3){
			discount += arr[index];
		}
		
		printf("%d\n", discount);
	}

	return 0;
}
