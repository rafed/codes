#include <cstdio>
#include <string>
#include <sstream>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	string input, english, foreign;
	map <string, string> dictionary;

	getline(cin, input);
	while(input != ""){
		istringstream iss(input);
		iss >> english >> foreign;

		dictionary[foreign] = english;

		getline(cin, input);
	}

	while(cin >> input)
	{
		if(dictionary[input].length() == 0)
			cout << "eh" << endl;
		else
			cout << dictionary[input] << endl;
	}

	return 0;
}
