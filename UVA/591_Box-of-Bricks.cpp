#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int n, set=1;
	
	while(cin>>n && n){
		
		int array[n], total=0, highestCol, counter=0;
		
		for(int i=0; i<n; i++){
			cin >> array[i];
			total+=array[i];
		}
		
		highestCol=total/n;
		
		for(int i=0; i<n; i++){
			if(array[i]!=highestCol){
				if(array[i]>highestCol){
					while(array[i]!=highestCol){
						counter++;
						array[i]--;
					}
				}
				else{
					while(array[i]!=highestCol){
						counter++;
						array[i]++;
					}
				}
			}		
		}
		
		printf("Set #%d\n", set);
		printf("The minimum number of moves is %d.\n\n", counter/2);
		
		set++;
		
	}

	return 0;

}
