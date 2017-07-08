#include <cstdio>
#include <queue>

using namespace std;

int main(){

	priority_queue <long long> array;
	long long temp, sum;
	int N;
	
	while(scanf("%d", &N) && N)
	{
		for(int i=0; i<N; i++)
		{
			scanf("%lld", &temp);
			array.push(-temp);
		}
		
		sum = 0;
		
		for(int i=0; i<N-1; i++)
		{
			long long a = -array.top();
			array.pop();
			long long b = -array.top();
			array.pop();
			temp = a+b;
			sum += temp;
			array.push(-temp);
		}
		
		array.pop();
		
		printf("%lld\n", sum);

	}

	return 0;

}
