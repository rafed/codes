#include <cstdio>

int main(){

	int T, days, numOfParties, partyBehavior, counter;
	
	scanf("%d", &T);
	while(T--){
		
		counter=0;
		
		scanf("%d", &days);
		bool checker[days];
		for(int i=1; i<=days; i++) checker[i]=false;
		
		scanf("%d", &numOfParties);
		while(numOfParties--){
			scanf("%d", &partyBehavior);
			for(int i=0; i<=days; i+=partyBehavior){/////
				checker[i]=true;
			}
		}
		
		for(int i=0; i<=days+7; i+=7){
			checker[i]=false;
			checker[i-1]=false;			
		}
				
		for(int i=1; i<=days; i++){
			if(checker[i]==true) counter++;
		}
		
		printf("%d\n", counter);
	}

	return 0;

}
