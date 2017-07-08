#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
	int n, c, temp, max;
	cin >> n;
	
	map<int, int> mp;
	
	for(int i=1; i<=n; i++){
		cin >> c;
		mp.clear();
		
		for(int j=0; j<c; j++){
			cin >> temp;
			mp[temp]++;
		}
		max = -1;
		for(map<int, int>::iterator it=mp.begin(); it!=mp.end(); ++it){
			if(it->second > max)
				max = it->second;
		}
		
		printf("Case %d: %d\n", i, max);
	}
	

	return 0;
}
