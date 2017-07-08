#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int T, N, max, a, b, current;
	
	cin >> T;
	
	for(int i=1; i<=T; i++){
		cin >> N;
		N--;
		
		max = -9999;
		current = 0;
		
		while(N--){
			cin >> a >> b;
			current -= b;
			current += a;
			
			if(current > max)
				max = current;
		}
		
		printf("Case %d: %d\n", i, max);
	}

	return 0;
}
