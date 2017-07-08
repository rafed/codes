#include<iostream>
#include<cstdio>

using namespace std;

int main(){

	int i;
	string str;

	for(i=1; ; i++){
		getline(cin, str);
		
		if(!str.compare("#")) break;
		else if(!str.compare("HELLO")) printf("Case %d: ENGLISH\n", i);
		else if(!str.compare("HOLA")) printf("Case %d: SPANISH\n", i);
		else if(!str.compare("HALLO")) printf("Case %d: GERMAN\n", i);
		else if(!str.compare("BONJOUR")) printf("Case %d: FRENCH\n", i);
		else if(!str.compare("CIAO")) printf("Case %d: ITALIAN\n", i);
		else if(!str.compare("ZDRAVSTVUJTE")) printf("Case %d: RUSSIAN\n", i);
		else printf("Case %d: UNKNOWN\n", i);
		
	}

	return 0;

}
