#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

int main(){

	string str, word;

	while(getline(cin, str)){
		istringstream iss(str);

		iss >> word;
		while(!iss.eof()){
			for(int i=word.length()-1; i>=0; i--)
				printf("%c", word[i]);
			printf(" ");
			iss >> word;
		}
		for(int i=word.length()-1; i>=0; i--)
			printf("%c", word[i]);
		printf("\n");
	}

	return 0;

}

/*
istringstream iss (str);
		iss >> word;
		for(int i=word.size()-1; i>=0; i++)
			printf("")
*/
