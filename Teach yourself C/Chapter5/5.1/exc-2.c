#include<stdio.h>

int main(){

	int num[10], i, j, check;
	
	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	
	//Chcek for repitition
	for(i=0; i<10; i++){
		check=num[i];
		for(j=i+1; j<10; j++){
			if(num[j]==check) printf("%d is entered more than once\n", check);
		}
	}
	
	return 0;
	
}

//Coded by Rafed.
