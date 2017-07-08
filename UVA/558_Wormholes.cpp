#include <cstdio>
#include <iostream>

using namespace std;

#define INF 9999999

struct e{
	int u, v, weight;
} edge[2000];

int main()
{
	int testcase;
	scanf("%d", &testcase);
	
	int n, m;
	int distance[1000];
	bool possible;
	
	while(testcase--)
	{
		scanf("%d %d", &n, &m);
		possible = false;
		
		for(int i=0; i<m; i++){
			scanf("%d %d %d", &edge[i].u, &edge[i].v, &edge[i].weight); 
		}
		
		for(int i=0; i<n; i++)
			distance[i] = INF;
			
		distance[0] = 0;
		
		for(int i=0; i<n-1; i++){
			for(int j=0; j<m; j++){
				if(distance[edge[j].u] + edge[j].weight < distance[edge[j].v])
					distance[edge[j].v] = distance[edge[j].u] + edge[j].weight;
			}
		}
		
		for(int i=0; i<m; i++){
			if(distance[edge[i].u] + edge[i].weight < distance[edge[i].v]){
				possible = true;
				break;
			}
		}
		
		if(possible) printf("possible\n");
		else printf("not possible\n");
	}

	return 0;
}
