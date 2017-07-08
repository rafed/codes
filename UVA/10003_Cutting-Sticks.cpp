#include <cstdio>
#include <iostream>
#include <cstring>

#define inf 9999999

using namespace std;

int dp[55][55], cuts[55];

int dpSolve(int left, int right)
{
	if(dp[left][right] != -1) return dp[left][right];
	
	if(right-left == 1){
		dp[left][right] = 0;
		return 0;
	}
	
	int ret = inf, cost;
	for(int i=left+1; i<right; i++){
		cost = dpSolve(left, i) + dpSolve(i, right) + cuts[right]-cuts[left];
		ret = min(ret, cost);
	}
	dp[left][right] = ret;

	return ret;
}

int main()
{
	int length, numOfCuts;
	
	while(cin >> length && length)
	{
		memset(dp, -1, sizeof(dp));
		
		cin >> numOfCuts;
		cuts[0] = 0;
		for(int i=1; i<=numOfCuts; i++)
			cin >> cuts[i];
		cuts[numOfCuts+1] = length;
		
		printf("The minimum cutting is %d.\n", dpSolve(0, numOfCuts+1));
	}

	return 0;
}
