#include <cstdio>

int main()
{
	int T;
	long long int input;
	long long int counter, temp;;

	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
		counter = 0;
		scanf("%lld", &input);
		while(input!=0){
			temp = input/2;
			if(temp*2 != input) counter++;
			input /=2;
		}

		if(counter%2==0)printf("Case %d: even\n", i);
		else printf("Case %d: odd\n", i);
	}

	return 0;
}
