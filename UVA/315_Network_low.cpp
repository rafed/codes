#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <sstream>

using namespace std;

int counter;

void dfs(vector<int> *adjList, bool *visited, int &time, int *discoveryTime, int *low, int *parent, bool *artiPoints, int u)
{
	int children = 0;

	visited[u] = true;
	discoveryTime[u] = low[u] = ++time;
	
	for(int i=0; i<adjList[u].size(); i++){
		int v = adjList[u][i];
		if(!visited[v]){
			children++;
			parent[v] = u;
			dfs(adjList, visited, time, discoveryTime, low, parent, artiPoints, v);
			
			/* Check if the subtree rooted with v has a connection to one of the ancestors of u */
			low[u] = min(low[u], low[v]);
			
			/* if u is root */
			if(parent[u] == -1 && children > 1)
				artiPoints[u] = true;
				
			else if(parent[u] != -1 && low[v] >= discoveryTime[u])
				artiPoints[u] = true;
		}
		/* Update low value of u for parent function calls. */
		else if(v != parent[u])
			low[u] = min(low[u], discoveryTime[v]);
	}
	time++;
}

int main()
{
	int N, node1, node2;
	string input;

	while(cin >> N)
	{
		if(N == 0) break;
		getchar();

		vector<int> adjList[N+1];

		while(getline(cin, input)){
			istringstream iss(input);
			iss >> node1;

			if(node1) {
				while(iss >> node2){
					adjList[node1].push_back(node2);
					adjList[node2].push_back(node1);
				}
			}
			else {
				break;
			}
		}

		bool visited[N+1];
		int discoveryTime[N+1];
		int low[N+1];
		int parent[N+1];
		int time = 0;
		bool artiPoints[N+1];
		
		memset(visited, false, N+1);
		memset(low, 0, sizeof(low));
		memset(parent, -1, sizeof(parent));
		memset(artiPoints, false, N+1);
		
		for(int u=1; u<=N; u++){
			if(!visited[u])
				dfs(adjList, visited, time, discoveryTime, low, parent, artiPoints, u);
		}

		int counter = 0;
		
		for(int i=1; i<=N; i++){
			if(artiPoints[i]) counter++;
		}
		
		cout << counter << endl;
	}

	return 0;
}
