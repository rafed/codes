#include <iostream>
#include <cstdio>

using namespace std;

#define INF 100000

int buildings[100][100];

void initialize(int N){
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			buildings[i][j] = INF;
			
	for(int i=0; i<N; i++)
		buildings[i][i] = 0;
}

int main()
{
	int T, minTime;
	int N, R;
	int s, d;
	int a, b;
	
	cin >> T;

	for(int kk=1; kk<=T; kk++)
	{
		cin >> N >> R;
		
		initialize(N);
		
		for(int i=0; i<R; i++){
			cin >> a >> b;
			buildings[a][b] = 1;
			buildings[b][a] = 1;
		}
		
		for(int k=0; k<N; k++)	
			for(int i=0; i<N; i++)
				for(int j=0; j<N; j++)
					buildings[i][j] = min(buildings[i][j], buildings[i][k]+buildings[k][j]);
		
		minTime = 0;
		cin >> s >> d;
					
		for(int i=0; i<N; i++){
			minTime = max(minTime, buildings[s][i] + buildings[i][d]);
		}
		
		printf("Case %d: %d\n", kk, minTime);
	}

	return 0;
}
