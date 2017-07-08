#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>

using namespace std;

int adjMatrix[101][101];

struct edge{
	int weight;
	int next;
};

struct compare {
	bool operator()(edge a, edge b){
		return a.weight > b. weight;
	}
};

void primAlgo(int C, int c1, int c2)
{
	priority_queue<edge, vector<edge>, compare> edgeQ;
	bool visited[C+1];
	memset(visited, false, sizeof(visited));
	int minimum	;

	edge temp, selected;

	visited[c1] = true;

	for(int v=1; v<=C; v++){
		temp.weight = adjMatrix[c1][v];
		if(temp.weight < 0) continue;

		temp.next = v;
		edgeQ.push(temp);
	}

	if(!edgeQ.empty()) minimum = edgeQ.top().weight;

	while(!edgeQ.empty())
	{
		selected = edgeQ.top();
		edgeQ.pop();
		if(visited[selected.next]) continue;

		visited[selected.next] = true;
		if(selected.weight > minimum) minimum = selected.weight;

		if(visited[c2]) break;
		for(int v=1; v<=C; v++){
			temp.weight = adjMatrix[selected.next][v];
			if(temp.weight < 0) continue;
			temp.next = v;
			edgeQ.push(temp);
		}
	}

	if(!visited[c2]) minimum = -1;

	if(minimum == -1) cout << "no path" << endl;
	else cout << minimum << endl;
}

void initialize(int C)
{
	for(int i=0; i<=C; i++)
		for(int j=0; j<=C; j++)
			adjMatrix[i][j] = -1;
}

int main()
{
	int C, S, Q;
	int c1, c2, weight;
	int testcase = 0;

	while(cin >> C >> S >> Q && C && S && Q)
	{
		initialize(C);

		for(int i=0; i<S; i++){
			cin >> c1 >> c2 >> weight;
			adjMatrix[c1][c2] = weight;
			adjMatrix[c2][c1] = weight;
		}

		if(testcase) cout << endl;
		cout << "Case #" << ++testcase << endl;
		for(int i=0; i<Q; i++){
			cin >> c1 >> c2;
			primAlgo(C, c1, c2);
		}
	}

	return 0;
}
