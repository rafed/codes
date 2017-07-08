#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

void dfs(vector<vector <int> > &adjList, bool *visited, vector<int> &topoSort, int u)
{
	visited[u] = true;
	for(int i=0; i<adjList[u].size(); i++){
		int v = adjList[u][i];
		if(!visited[v])
			dfs(adjList, visited, topoSort, v);
	}
	topoSort.push_back(u);
}

int main()
{
	int N;
	cin >> N;

	int n, m;
	int a, b;

	while(N--)
	{
		cin >> n >> m;

		vector< vector<int> > adjList(n+1);
		vector<int> topoSort;
		bool visited[n+1];

		memset(visited, false, n+1);

		for(int i=0; i<m; i++){
			cin >> a >> b;
			adjList[a].push_back(b);
		}

		for(int u=1; u<=n; u++){
			if(!visited[u])
				dfs(adjList, visited, topoSort, u);
		}

		reverse(topoSort.begin(), topoSort.end());

		memset(visited, false, n+1);

		int counter = 0;

        for (int i=0; i<n; i++)
        {
            int u = topoSort[i];
            if(!visited[u]){
                dfs(adjList, visited, topoSort, u);
                counter++;
            }
        }
        cout << counter << endl;
	}

	return 0;
}
