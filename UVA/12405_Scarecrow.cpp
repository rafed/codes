#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int T;
	scanf("%d\n", &T);
	
	string field;
	int counter, length;
	
	for(int tc=1; tc<=T; tc++)
	{
		scanf("%d\n", &length);
		getline(cin, field);
		counter = 0;
		
		for(int i=0; i<length; )
		{
			if(field[i] == '#'){
				i++;
			}
			else{
				i += 3;
				counter++;
			}
		}
		printf("Case %d: %d\n", tc, counter);
	}
}
