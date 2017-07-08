#include <cstdio>
#include <iostream>
#include <cmath>

#define MAX 201
#define INF 100000

using namespace std;

double mat[MAX][MAX];


struct point{
	int x, y;
} node[MAX];

double calculateDistance(int i, int j)
{
	return sqrt( (node[i].x-node[j].x)*(node[i].x-node[j].x) + (node[i].y-node[j].y)*(node[i].y-node[j].y) );
}

void initialize(int n)
{
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			mat[i][j] = INF;
			
	for(int i=0; i<n; i++)
		mat[i][i] = 0;
}

int main ()
{
	int n, counter = 0;
	
	while(cin >> n && n)
	{
		initialize(n);

		for(int i=0; i<n; i++){
			cin >> node[i].x >> node[i].y;
		}
		
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				mat[i][j] = mat[j][i] = calculateDistance(i, j);
			}
		}
		
		for(int k=0; k<n; k++)
			for(int i=0; i<n; i++)
				for(int j=0; j<n; j++){
					mat[i][j] = min(mat[i][j], max(mat[i][k], mat[k][j]));
				}
				
		printf("Scenario #%d\n", ++counter);
		printf("Frog Distance = %.3lf\n\n", mat[0][1]);
	}

	return 0;
}
