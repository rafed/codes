#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

/*function to rotate small array*/
int rotate90(char **smallArray, int n){
	
	/*creating temporary array*/
	char **temp;
	temp = new char*[n];
	for(int i=0; i<n; i++){
		temp[i] = new char[n];
	}
	
	/*putting small array in temp*/
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			temp[i][j] = smallArray[i][j];
		}
	}
	
	/*rotating 90 degrees*/
	for(int i=0; i<n; i++){
		for(int j=n-1; j>=0; j--){
			smallArray[i][n-1-j] = temp[j][i];
		}
	}
	
	/*destructing temporary array*/
	for(int i=0; i<n; i++){
		delete[] temp[i];
	}
	delete[] temp;
	
}

/* function for counting number of matches */
int count(char **bigArray, char **smallArray, int N, int n){
	int counter = 0;
	bool ok;
	for(int i=0; i<N-n+1; i++){
		for(int j=0; j<N-n+1; j++){
			ok = true;
			for(int k=0; k<n; k++){
				for(int l=0; l<n; l++){
					if(bigArray[i+k][j+l]!=smallArray[k][l]){
						ok = false;
						k=n;
						break;
					}
				}
			}
			if(ok) counter++;
		}
	}
	return counter;
}

int main(){

	int N, n; /* N for bigArray, n for smallArray */
	
	while(scanf("%d %d", &N, &n) && N!=0 && n!=0){
	
		char junk;
		scanf("%c",  &junk);
		
		/*creating big array*/
		char **bigArray;
		bigArray = new char*[N];
		for(int i=0; i<N; i++){
			bigArray[i] = new char[N];
		}
		
		/*creating small array*/
		char **smallArray;
		smallArray = new char*[n];
		for(int i=0; i<n; i++){
			smallArray[i] = new char[n];
		}
		
		/*putting characters inside big array*/
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				scanf("%c", &bigArray[i][j]);
			}
			scanf("%c", &junk);
		}
		
		/*putting characters inside small array*/
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				scanf("%c", &smallArray[i][j]);
			}
			scanf("%c", &junk);
		}

		/******* Counting number of matches *******/
		for(int i=0; i<4; i++){
			printf("%d", count(bigArray, smallArray, N, n));
			rotate90(smallArray, n);
			if(i!=3) printf(" ");
		}
		cout << endl;
		
		/*destructing big array*/
		for(int i=0; i<N; i++){
			delete [] bigArray[i];
		}
		delete[] bigArray;
		
		/*destructing small array*/
		for(int i=0; i<n; i++){
			delete [] smallArray[i];
		}
		delete[] smallArray;
	}

	return 0;

}

/* bigArray and smallArray printing functions(for testing purpose)
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				printf("%c", bigArray[i][j]);
			}
			cout << endl;
		}
		
		for(int j=0; j<4; j++){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%c", smallArray[i][j]);
			}
			cout << endl;
		}
		rotate90(smallArray, n);
		}
*/
