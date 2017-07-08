#include <iostream>

using namespace std;

int main()
{
	int T, N, counter;
	
	scanf("%d", &T);
	
	while(T--){
		counter = 0;
		scanf("%d", &N);
		
		for(int i=1; i<=N/2; i++){
			for(int j=i; j<=N/2; j++){
				for(int k=j; k<=N/2; k++){
					if(i+j+k == N){
						if(i+j>=k)// || j+k>=i || k+i>=j)
							counter++;
					}
				}
			}
		}
		
		printf("%d\n", counter);
	}

	return 0;
}
