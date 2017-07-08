#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

	int n, array[3000], difference;
	bool yesNo, jolly[3000];;
	
	while(scanf("%d", &n)==1){
	
		yesNo=true;
	
		for(int i=0; i<n; i++){
			scanf("%d", &array[i]);
			jolly[i] = false;
		}
		
		for(int i=0; i<n-1; i++){
			difference = abs(array[i]-array[i+1]);
			jolly[difference]=true;
		}
		
		for(int i=1; i<n; i++){
			if (jolly[i]==false){
				yesNo=false;
				break;
			}	
		}
		
		if(yesNo) printf("Jolly\n");
		else printf("Not jolly\n");
		
	}

	return 0;

}
