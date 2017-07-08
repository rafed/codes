#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <sstream>

using namespace std;

void dfs(vector<int> *adjList, bool *visited, int turnedOff, int u)
{
	visited[u] = true;
	for(int i=0; i<adjList[u].size(); i++){
		int v = adjList[u][i];
		if(!visited[v] && v != turnedOff){
			dfs(adjList, visited, turnedOff, v);
		}
	}
}

int main()
{
	int N, node1, node2, counter;
	string input;

	while(cin >> N)
	{
		if(N == 0) break;
		if(N == 1){
			cin >> node1;
			cout << "0" << endl;
			continue;
		}
		getchar();

		vector<int> adjList[N+1];
		bool visited[N+1];

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

		counter = 0;

		for(int turnedOff=1; turnedOff<=N; turnedOff++){
			memset(visited, false, N+1);

			for(int u=1; u<=N; u++){
				if(turnedOff != u && !visited[u]){
					dfs(adjList, visited, turnedOff, u);
					break;
				}
			}

			for(int u=1; u<=N; u++){
				if(turnedOff != u && !visited[u]){
					counter++;
					break;
				}
			}
		}

		cout << counter << endl;
	}

	return 0;
}
