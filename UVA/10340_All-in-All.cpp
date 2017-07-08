#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	string searchKey, str;

	while(cin >> searchKey >> str)
	{
		int currentLetterIndex = 0;
		int matchedLength = 0;
		bool matched = false;

		for(int i=0; i<str.length(); i++)
		{
			if(str[i] == searchKey[currentLetterIndex]){
				currentLetterIndex++;
				matchedLength++;
			}
			if(matchedLength == searchKey.length()){
				matched =true;
				break;
			}
		}
		printf(matched ? "Yes\n" : "No\n");
	}

	return 0;
}
