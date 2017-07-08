#include <cstdio>
#include <list>

using namespace std;

int main()
{
	int currentCase = 1;
	int population, numOfCommands, temp;
	char action, junk;

	while(scanf("%d %d", &population, &numOfCommands) && population && numOfCommands){

		if(population > 1000) population = 1000;

		list<int> patientList;
		for(int i=1; i<=population; i++){
			patientList.push_back(i);
		}

		printf("Case %d:\n", currentCase++);

		for(int i=0; i<numOfCommands; i++){
			scanf(" %c", &action);
			if(action == 'E'){
				scanf("%d", &temp);
				patientList.remove(temp);
				patientList.push_front(temp);
			}
			else {
				temp = patientList.front();
				patientList.pop_front();
				patientList.push_back(temp);
				printf("%d\n", temp);
			}
		}
	}

	return 0;
}
