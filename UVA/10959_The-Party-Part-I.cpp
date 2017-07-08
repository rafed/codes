#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main()
{
    int N;
	cin >> N;
	
	while(N--){
		
		int P, D;
		cin >> P >> D;
		
		vector<int> adjList[P];
		bool visited[P];
		int distance[P];
		
		memset(visited, false, P);
		memset(distance, 999999, P);
		
		for(int i=0; i<D; i++){
			int a, b;
			cin >> a >> b;
			adjList[a].push_back(b);
			adjList[b].push_back(a);
		}
		
		queue<int> list;
		list.push(0);
		distance[0] = 0;
		
		while(!list.empty())
		{
			int u = list.front();
			for(int i=0; i<adjList[u].size(); i++){
				int v = adjList[u][i];
				if(!visited[v]){
					list.push(v);
					visited[v] = true;
					distance[v] = distance[u] + 1;					
				}
			}
			list.pop();
		}
		
		for(int i=1; i<P; i++)
			cout << distance[i] << endl;
			
		if(N) cout << endl;
	}

    return 0;
}
