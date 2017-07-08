#include <cstdio>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<int, int> mp;
	vector<int> num;

	int n;
	while(scanf("%d", &n)==1)
	{
		if(mp[n]==0) num.push_back(n);
		mp[n]++;
	}

	for(int i=0; i<num.size(); i++)
		printf("%d %d\n", num[i], mp[num[i]]);

	return 0;
}
