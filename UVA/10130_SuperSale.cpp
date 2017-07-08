#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int dp[1001][31];

int weight[1001];
int price[1001];

void solveDP(int N)
{
	memset(dp, 0, sizeof(dp));
	
	for(int i=1; i<=N; i++){
		for(int w=1; w<=30; w++){
			if(weight[i] > w)
				dp[i][w] = dp[i-1][w];
			else
				dp[i][w] = max(dp[i-1][w], price[i] + dp[i-1][w-weight[i]]);
		}
	}
}

int main()
{
	int T;
	cin >> T;
	
	int N, G;
	
	while(T--)
	{
		cin >> N;
		for(int i=1; i<=N; i++){
			cin >> price[i] >> weight[i];
		}
		
		solveDP(N);
		
		int profit = 0, temp;
		
		cin >> G;
		while(G--){
			cin >> temp;
			profit += dp[N][temp];
		}
		
		cout << profit << endl;
	}

	return 0;
}
