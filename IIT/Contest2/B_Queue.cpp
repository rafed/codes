#include <iostream>
#include <cstdio>
#include <deque>
#include <string>

using namespace std;

int main(){

	int T;

	int queSize, numOfCommands;
	string line, command; int value;

	scanf("%d", &T);
	for(int i=1; i<= T; i++)
	{
		printf("Case %d:\n", i);
		scanf("%d %d", &queSize, &numOfCommands);
		deque <int> arr;
		for(int j=0; j<numOfCommands; j++)
		{
			cin >> command;
			if(!command.compare("pushRight") || !command.compare("pushLeft")) scanf("%d", &value);
			if(!command.compare("pushLeft")){
				if(arr.size()<queSize){
					printf("Pushed in left: %d\n", value);
					arr.push_front(value);
				}
				else printf("The queue is full\n");
			}
			else if(!command.compare("popLeft")){
				if(arr.size()>0){
					printf("Popped from left: %d\n", arr[0]);
					arr.pop_front();
				}
				else printf("The queue is empty\n");
			}
			else if(!command.compare("pushRight")){
				if(arr.size()<queSize){
					printf("Pushed in right: %d\n", value);
					arr.push_back(value);
				}
				else printf("The queue is full\n");
			}
			else if(!command.compare("popRight")){
				if(arr.size()>0){
					printf("Popped from right: %d\n", arr[arr.size()-1]);
					arr.pop_back();
				}
				else printf("The queue is empty\n");
			}
		}

	}

	return 0;

}
