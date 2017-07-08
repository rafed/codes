#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){

	int N, numOfPaidCharacters;
	int numOfLines;
	double total, value;
	char ch;
	string line;

	scanf("%d\n", &N);
	while(N--){

		total=0;
		map<char, int> mp;

		scanf("%d\n", &numOfPaidCharacters);
		for(int i=0; i<numOfPaidCharacters; i++){
			scanf("%c %lf\n", &ch, &value);
			mp[ch] = value;
		}

		scanf("%d\n", &numOfLines);
		for(int i=0; i<numOfLines; i++){
			getline(cin, line);
			for(int j=0; j<line.length(); j++){
				ch=line[j];
				total+=mp[ch];
			}
		}

		printf("%.2lf$\n",total/100.0);

	}

	return 0;

}
