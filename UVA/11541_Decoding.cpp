#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

int main(){

	int T;
	char str[201];
	char ch;
	int freq;
	
	scanf("%d\n", &T);
	for(int i=1; i<=T; i++)
	{
		fgets(str, 80, stdin);
		istringstream iss(str);
		printf("Case %d: ", i);
		while(iss >> ch >> freq)
		{
			for(int j=0; j<freq; j++) putchar(ch);	
		}
		cout << endl;
	}

	return 0;

}
