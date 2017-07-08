#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int N, temp;

    while(scanf("%d", &N) && N)
	{
		for(;;){
			stack<int> station;
			queue<int> outOrder;

			scanf("%d", &temp);
			if (temp == 0) break;
			outOrder.push(temp);
			for(int i=1; i<N; i++){
				scanf("%d", &temp);
				outOrder.push(temp);
			}

			for(int i=1; i<=N; i++){

                if(i == outOrder.front()){
					outOrder.pop();
					while(!outOrder.empty() && !station.empty() && outOrder.front() == station.top()){
						outOrder.pop();
						station.pop();
					}
                }
                else{
					station.push(i);
                }
			}

			if(station.empty()) printf("Yes\n");
			else printf("No\n");
		}
		printf("\n");
	}

	return 0;
}
