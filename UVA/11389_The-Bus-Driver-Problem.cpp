#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, d, r;
	int overtime, a, b;
	
	while(scanf("%d %d %d", &n, &d, &r))
	{
		if(n==0 && d==0 && r==0) break;
		
		overtime = 0;
		priority_queue<int> morning;
		priority_queue<int, vector<int>, greater<int> > afternoon;
		
		for(int i=0; i<n; i++){
			scanf("%d", &a);
			morning.push(a);
		}
		
		for(int i=0; i<n; i++){
			scanf("%d", &b);
			afternoon.push(b);
		}
		
		for(int i=0; i<n; i++){
			a = morning.top();
			morning.pop();
			
			b = afternoon.top();
			afternoon.pop();
			
			if(a+b > d){
				overtime += ((a+b) - d)*r;
			}
		}
		
		printf("%d\n", overtime);
	}

	return 0;
}
