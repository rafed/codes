#include <cstdio>
#include <string>
#include <stack>
#include <iostream>

using namespace std;

int main()
{
	int N;
	string input;
	char ch;

	scanf("%d\n", &N);
	for(int i=0; i<N; i++)
	{
		getline(cin, input);

		stack<char> checker;
		bool flag = true;

		for(int j=0; j<input.length(); j++)
		{
			ch = input[j];
			if(ch=='(' || ch=='[')
				checker.push(ch);
			else{
				if(checker.empty()){
					flag = false;
					break;
				}
				else if(ch==')'&& checker.top() == '(') checker.pop();
				else if(ch==']'&& checker.top() == '[') checker.pop();
			}
		}

		if(checker.empty() && flag) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
