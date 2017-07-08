#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	string input, temp, bhejals = "`~!@#$%^&*()-_=+[{]}|;:,<.>?\'\"\\/1234567890";
	map<string, int> mp;
	
	while(getline(cin, input)){
		for(int i=0; i<bhejals.size(); i++){
			replace(input.begin(), input.end(), bhejals[i], ' ');
		}
		for(int i=0; i<input.size(); i++){
			transform(input.begin(), input.end(), input.begin(), ::tolower);
		}
		
		istringstream iss (input);
		
		while(iss >> temp){
			mp[temp] = 1;
		}
	}

	for(map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it){
		cout << it->first << endl;
	}

	return 0;
}
