#include <iostream>
#include <cstdio>

using namespace std;

int mat[100][100], row[100], col[100];

int main()
{
	int n, radd, cadd;
	int rpos, cpos, rcount, ccount;
	
	while(cin >> n && n){
		
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> mat[i][j];
			}
		}
		
		for(int i=0; i<n; i++){
			radd = cadd = 0;
			for(int j=0; j<n; j++){
				radd += mat[i][j];
				cadd += mat[j][i];
			}
			row[i] = radd;
			col[i] = cadd;
		}

		rcount = ccount = 0;
		for(int i=0; i<n; i++){
			if(row[i]%2 != 0){
				rcount++;
				rpos = i;
			}
			if(col[i]%2 != 0){
				ccount++;
				cpos = i;
			}
			if(rcount > 1 || ccount > 1){
				break;
			}
		}
		
		if(rcount > 1 || ccount > 1){
			cout << "Corrupt" << endl;
		}
		else if(!ccount && !rcount){
			cout << "OK" << endl;
		}
		else {
			printf("Change bit (%d,%d)\n", rpos+1, cpos+1);
		}
	}	

	return 0;
}
