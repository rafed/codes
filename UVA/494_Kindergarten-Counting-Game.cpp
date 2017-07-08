#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){

	string input, word;
	long long count, length;
	
	string vajals = "0123456789!@#$%^&*()_+-={}][:\";'<>?/.\\,|";
	
	while(getline(cin, input)){
		count = 0;
		
		for(int i=0; i<vajals.length(); i++){
			replace(input.begin(), input.end(), vajals[i], ' ');
		}			
		
		
		istringstream iss(input);
		while(iss >> word){
				count++;
		}
		printf("%lld\n", count);
	}

	return 0;

}
