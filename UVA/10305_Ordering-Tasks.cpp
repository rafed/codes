#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void dfsVisit(vector<int> *adjacencyList, bool *visited, int &time, int *finishTime, int currentNode)
{
	time++;
	visited[currentNode] = true;
	for(int i=0; i<adjacencyList[currentNode].size(); i++){
		if(!visited[adjacencyList[currentNode][i]]) dfsVisit(adjacencyList, visited, time, finishTime, adjacencyList[currentNode][i]);
	}
	finishTime[currentNode] = ++time;
}

int main()
{
	int n, m;
	int a, b;
	
	while(cin >> n >> m && n)
	{
		vector<int> adjacencyList[n+1];
		int time = 0, finishTime[n+1];
		bool visited[n+1];
		int answer[n+1];
		
		for(int i=0; i<m; i++){
			cin >> a >> b;
			adjacencyList[a].push_back(b);
		}
		
		for(int i=1; i<=n; i++){
			finishTime[i] = -999;
			visited[i] = false;
			answer[i] = i;
		}
		
		for(int i=1; i<=n; i++){
			if(!visited[i]) dfsVisit(adjacencyList, visited, time, finishTime, i);
		}
			
		for(int i=1; i<n; i++){
			for(int j=i+1; j<=n; j++){
				if(finishTime[i]<finishTime[j]){
					int temp = finishTime[i];
					finishTime[i] = finishTime[j];
					finishTime[j] = temp;
					temp = answer[i];
					answer[i] = answer[j];
					answer[j] = temp;
				}
			}
		}
		
		for(int i=1; i<n; i++)
			cout << answer[i] << " ";
		cout << answer[n] << endl;
	}		

	return 0;
}
