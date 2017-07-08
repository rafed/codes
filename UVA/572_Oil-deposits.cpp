#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char arr[100][100];
bool visited[100][100];
int m, n;

void clear(int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            visited[i][j] = false;
        }
    }
}

void dfs(int a, int b){
    if(a < 0 || a >=m || b < 0 || b >= n){
        return;
    }

    if(arr[a][b] != '@' || visited[a][b]){
        return;
    }

    visited[a][b] = true;

    dfs(a+1, b);
    dfs(a-1, b);
    dfs(a, b+1);
    dfs(a, b-1);
    dfs(a+1, b+1);
    dfs(a-1, b-1);
    dfs(a+1, b-1);
    dfs(a-1, b+1);
}

int main()
{
	int oil;

	while(cin >> m >> n && m != 0){
		oil = 0;

        clear(m, n);

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin >> arr[i][j];
			}
		}

        for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(arr[i][j] == '@' && !visited[i][j]){
                    dfs(i, j);
                    oil++;
				}
			}
		}

		printf("%d\n", oil);
	}

	return 0;
}
