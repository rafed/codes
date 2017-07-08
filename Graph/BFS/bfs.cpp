#include <cstdio>
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

///Function to read file and take input into the array
bool readfile(char *filename, int &numOfVertex, int matrix[][100])
{
	ifstream iFile;

	iFile.open(filename);

	if(iFile.is_open())
	{
		iFile >> numOfVertex;

		for(int i=0; i<numOfVertex; i++){
			for(int j=0; j<numOfVertex; j++){
				iFile >> matrix[i][j];
			}
		}
		return true;
	}
	else
	{
		cout << "Couldn't open file." << endl;
		return false;
	}
}

///Function to print input matrix
void printMatrix(int numOfVertex, int matrix[][100])
{
	for(int i=0; i<numOfVertex; i++){
		for(int j=0; j<numOfVertex; j++){
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

///Initialize arrays that play role in performing dfs (distance, color, previous, visited)
void initialize(int numOfVertex, int *distance, int *color, int *previous, bool *visited)
{
	for(int i=0; i<numOfVertex; i++)
	{
		distance[i] = 10000;
		color[i] = 0;
		previous[i] = -1;
		visited[i] = false;
	}
}

///Function to print the performed BFS (vertex distance)
void printResult(int numOfVertex, int *distance, int *previous, bool *visited, bool bipartiteness)
{
    bool connected = true;
    for(int i=0; i<numOfVertex; i++){
		printf("%c  %d  %c\n", i+'R', distance[i], (previous[i]+'R' < 'R' ? '0' : previous[i]+'R'));
		if(visited[i] == false) connected = false;
    }
    (connected) ?	cout << "The graph is connected" << endl : cout << "Forest graph" << endl;

	(bipartiteness) ? cout << "The graph is bipartite" << endl : cout << "The graph is not bipartite" << endl;
}

///BFS function
void bfs(int numOfVertex, int matrix[][100], int startNode)
{
	int distance[numOfVertex], previous[numOfVertex], color[numOfVertex];
	bool visited[numOfVertex];
	int bipartiteness = true;

	initialize(numOfVertex, distance, color, previous, visited);

	//initializing for start node
	distance[startNode] = 0;
	color[startNode] = 1;
	visited[startNode] = true;

	queue<int> bfsQueue;

	bfsQueue.push(startNode);
	while(!bfsQueue.empty())
	{
		int i = bfsQueue.front();
		bfsQueue.pop();

		for(int j=0; j<numOfVertex; j++)
		{
			if(matrix[i][j] && !color[j])
			{
				color[j] = 3-color[i];
				distance[j] = distance[i] + 1;
				previous[j] = i;
				visited[j] = true;
				bfsQueue.push(j);
			}
			else if(matrix[i][j] && color[i] == color[j])
			{
				bipartiteness = false;
			}
		}
		//color[i] = 2;
	}
	printResult(numOfVertex, distance, previous, visited, bipartiteness);
}

///Main function
int main(int argc, char *argv[])
{
	int numOfVertex, startNode;
	int matrix[100][100];

	if(readfile(argv[1], numOfVertex, matrix)){

		printMatrix(numOfVertex, matrix);

		cout << "Enter start node: ";
		cin >> startNode;
		while(startNode >= 0)
		{
			bfs(numOfVertex, matrix, startNode);
			cout << "Enter start node: ";
			cin >> startNode;
		}
	}

	return 0;
}
