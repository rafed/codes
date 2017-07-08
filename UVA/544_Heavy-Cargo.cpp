#include <cstdio>
#include <iostream>
#include <queue>
#include <map>
#include <cstring>

using namespace std;

int adjMatrix[201][201];

struct edge{
	int weight;
	int next;
};

struct compare
{
    bool operator()(struct edge &edge1, struct edge &edge2)
    {
        return edge1.weight<edge2.weight;
    }
};

int primAlg(int source, int destination, int numOfCity)
{
    int maximum = -9999;
	bool visited[numOfCity+1];
	memset(visited, false, sizeof(visited));

	priority_queue<edge, vector<edge>, compare> edgeQ;

	visited[source] = true;
	edge temp, selected;

	for(int v=1; v<=numOfCity; v++){
		temp.weight = adjMatrix[source][v];
		if(temp.weight < 0) continue;
		temp.next = v;
		edgeQ.push(temp);
		if(temp.weight > maximum) maximum = temp.weight;
	}

	while(!visited[destination])
	{
		selected = edgeQ.top();
		edgeQ.pop();
		if(visited[selected.next]) continue;

		visited[selected.next] = true;
		if(selected.weight < maximum) maximum = selected.weight;

		for(int v=1; v<=numOfCity; v++){
			temp.weight = adjMatrix[selected.next][v];
			if(temp.weight < 0) continue;
			temp.next = v;
			edgeQ.push(temp);
		}
	}

    return maximum;
}

int main()
{
	int n, r;
	string city1, city2;
	int weight, index;
	int testcase = 0;

	while(cin >> n >> r && n && r)
	{
		map<string, int> nameToNum;
		map<int, string> numToName;
		index = 0;

		for(int i=0; i<=n; i++)
			for(int j=0; j<=n; j++)
				adjMatrix[i][j] = -1;

		for(int i=0; i<r; i++){
			cin >> city1 >> city2 >> weight;
			if(!nameToNum[city1]) nameToNum[city1] = ++index;
			if(!nameToNum[city2]) nameToNum[city2] = ++index;

			adjMatrix[nameToNum[city1]][nameToNum[city2]] = weight;
			adjMatrix[nameToNum[city2]][nameToNum[city1]] = weight;
		}

		cin >> city1 >> city2;

		printf("Scenario #%d\n", ++testcase);
		printf("%d tons\n\n", primAlg(nameToNum[city1], nameToNum[city2], n));
	}

	return 0;
}
