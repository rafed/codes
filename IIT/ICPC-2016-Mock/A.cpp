#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, t;
	
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		if(n >= 0){
			for(int i=0; i<n; i++)
				printf("%d ", i);
			printf("%d\n", n);
		}
		else {
			for(int i=n; i<0; i++)
				printf("%d ", i);
			printf("%d\n", 0);
		}
	}

	return 0;
}
