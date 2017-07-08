#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){

	int T;
	long long int num;
	string name;

	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
		cin >> num >> name;
		num %= 3;
		printf("Case %d: ", i);
		if(!name.compare("Alice"))
		{
			if(num==1) printf("Bob\n");
			else printf("Alice\n");
		}
		else if(!name.compare("Bob"))
		{
			if(num==0) printf("Alice\n");
			else printf("Bob\n");
		}
	}

	return 0;

}

//Alice and Bob - acm.hust
