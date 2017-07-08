#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

#define INF 999999999

int mat[23][23];

void initialize(int N){
	for(int i=1; i<=N; i++)
		for(int j=1; j<=N; j++)
			mat[i][j] = INF;
			
	for(int i=1; i<=N; i++)
		mat[i][i] = 0;
}

int main()
{
	int N, M, counter = 0;
	int a, b, weight;
	string temp;
	
	while(scanf("%d %d", &N, &M)==2)
	{
		if(N==0 && M==0) break;
		initialize(N);
		map<int, string> names;
		
		for(int i=1; i<=N; i++){
			cin >> temp;
			names[i] = temp;
		}
		
		for(int i=0; i<M; i++){
			cin >> a >> b >> weight;
			mat[a][b] = weight;
			mat[b][a] = weight;
		}
		
		for(int k=1; k<=N; k++)	
			for(int i=1; i<=N; i++)
				for(int j=1; j<=N; j++)
					mat[i][j] = min(mat[i][j], mat[i][k]+mat[k][j]);
		
		int minDist = INF;
		int sum, index;
					
		for(int i=1; i<=N; i++)
		{
			sum = 0;
			
			for(int j=1; j<=N; j++){
				sum += mat[j][i];
			}
			
			if(minDist > sum){
				minDist = sum;
				index = i;
			}
		}
		
		cout << "Case #" << ++counter << " : " << names[index] << endl;
	}

	return 0;
}
