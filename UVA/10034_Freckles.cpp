#include <cstdio>
#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

struct edge{
	double weight;
	int prev, next;
};

struct compare
{
    bool operator()(struct edge &edge1, struct edge &edge2)
    {
        return edge1.weight>edge2.weight;
    }
};

struct node{
	double x, y;
};

double distanceCalc(struct node a, struct node b)
{
	return sqrt(abs((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y)));
}

double adjMatrix[100][100];

double primAlg(int numOfFreckles, bool* visited, struct node* nodeArray)
{
	double inkLength = 0;
	priority_queue<edge, vector<edge>, compare> edgeQ;
	
	edge temp;
	edge selected;

	for(int v=0; v<numOfFreckles; v++){
		temp.weight = adjMatrix[0][v];
		temp.prev = -1;
		temp.next = v;
		edgeQ.push(temp);
	}
	visited[0] = true;
	
	while(!edgeQ.empty())
	{
		selected = edgeQ.top();
		edgeQ.pop();
		if(visited[selected.next]) continue;

		visited[selected.next] = true;
		inkLength += selected.weight;
		
		for(int v=0; v<numOfFreckles; v++){
			temp.weight = adjMatrix[selected.next][v];
			temp.prev = selected.prev;
			temp.next = v;
			edgeQ.push(temp);
		}
	}
	
	return inkLength;
}

int main()
{
	int testCase, numOfFreckles;
	cin >> testCase;
	
	while(testCase--)
	{
		cin >> numOfFreckles;
		
		bool visited[numOfFreckles];
		node nodeArray[numOfFreckles];
		
		for(int i=0; i<numOfFreckles; i++){
			cin >> nodeArray[i].x >> nodeArray[i].y;
			visited[i] = false;
		}
		
		for(int i=0; i<numOfFreckles-1; i++){
			for(int j=i+1; j<numOfFreckles; j++){
				if(i == j) adjMatrix[i][j] = 0;
				else {
					adjMatrix[i][j] = adjMatrix[j][i] = distanceCalc(nodeArray[i], nodeArray[j]);
				}
			}
		}
		
		printf("%.2lf\n", primAlg(numOfFreckles, visited, nodeArray));
		if(testCase) cout << endl;
	}

	return 0;
}
