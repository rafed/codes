#include <iostream>
#include <cstdio>
using namespace std;

string selector(char ch){
	switch(ch){
		case 'B':
		case 'F':
		case 'P':
		case 'V':
			return "1";
		case 'C':
		case 'G':
		case 'J':
		case 'K':
		case 'Q':
		case 'S':
		case 'X':
		case 'Z':
			return "2";
		case 'D':
		case 'T':
			return "3";
		case 'L':
			return"4";
		case 'M':
		case 'N':
			return"5";
		case 'R':
			return "6";
		default:
			return "";
	}
}

int main()
{
	char str[21];
	string top, ans, select;
	
	while(scanf("%s", str) != EOF){
		ans = top = "";
		
		for(int i=0; str[i]; i++){
			
			select = selector(str[i]);
			
			if(select != top){
				ans += select;
				top = select;
			}
			
		}
		cout << ans << endl;
	}

	return 0;
}
