#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main()
{
	map<string, int> mp;
	queue<string> que;
	
	int counter = 0;
	string temp="";
	
	for(char ch='a'; ch<='z'; ch++){
		que.push(temp+ch);
	}
	
	while(!que.empty()){
		temp = que.front();
		que.pop();
		
		mp[temp] = ++counter;
		
		if(temp.size() == 5)
			continue;
			
		for(char ch=temp[temp.size() - 1]+1; ch <= 'z'; ch++)
			que.push(temp+ch);
	}
	
	while(cin >> temp){
		cout << mp[temp] << endl;
	}

	return 0;
}
