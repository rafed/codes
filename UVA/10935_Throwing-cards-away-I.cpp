#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) && n)
	{
		queue<int> cardHolder;
		for(int i=1; i<=n; i++){
			cardHolder.push(i);
		}

		vector<int> discardedCards;

		while(cardHolder.size() != 1)
		{
			int temp;

			temp = cardHolder.front();
			cardHolder.pop();
			discardedCards.push_back(temp);

			temp = cardHolder.front();
			cardHolder.pop();
			cardHolder.push(temp);
		}

		printf("Discarded cards:");
		if(discardedCards.size() == 0) printf("\n");
		else {
			for(int i=0; i<discardedCards.size()-1; i++){
				printf(" %d,", discardedCards[i]);
			}
			printf(" %d\n", discardedCards[discardedCards.size()-1]);

		}

		printf("Remaining card: %d\n", cardHolder.front());
	}

	return 0;
}
