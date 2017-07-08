#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

bool bfsBipartiteness(int numberOfNodes, vector< vector<int> > traverse)
{
	int color[numberOfNodes];

	memset(color, 0, sizeof(color));

	queue <int> bfsQueue;
	bfsQueue.push(0);
	color[0] = 1;

	while(!bfsQueue.empty())
	{
        int i = bfsQueue.front();
        bfsQueue.pop();

		for(int j=0; j<traverse[i].size(); j++)
		{
			if(color[traverse[i][j]]==0)
			{
				if(color[i] == 1)
					color[traverse[i][j]] = 2;
				else
					color[traverse[i][j]] = 1;

				bfsQueue.push(traverse[i][j]);
			}
			else if(color[traverse[i][j]]==color[i])
			{
				return false;
			}
        }
	}

	return true;
}

void takeInput(int numberOfNodes, int numberOfEdges, vector< vector<int> > &traverse)
{
	for(int i=0; i<numberOfNodes; i++){
		vector <int> row;
		traverse.push_back(row);
	}

	int x, y;
	for(int i=0; i<numberOfEdges; i++)
	{
		scanf("%d %d", &x, &y);
		traverse[x].push_back(y);
		traverse[y].push_back(x);
	}
}

int main()
{
	int numberOfNodes;
	int numberOfEdges;

	while(scanf("%d", &numberOfNodes) && numberOfNodes)
	{
		vector< vector<int> > traverse;

		scanf("%d", &numberOfEdges);

		takeInput(numberOfNodes, numberOfEdges, traverse);

		if(bfsBipartiteness(numberOfNodes, traverse)) printf("BICOLORABLE.\n");
		else printf("NOT BICOLORABLE.\n");
	}

	return 0;
}
