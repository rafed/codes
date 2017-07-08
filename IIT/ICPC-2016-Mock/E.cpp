#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N, inp, max = -1, min = 999999;
	cin >> N;

	for(int i=1; i<=N; i++){
		cin >> inp;
		
		if(inp > max)
			max = inp;
		if(inp < min)
			min = inp;
		
		printf("Case %d: %.2f\n", i, (float)max/min);
	}

	return 0;
}
