#include <cstdio>
#include <cmath>

int modExp(int x, int y, int n)
{
	if(y==0) return 1;
	else if(y%2==0){
		int temp = modExp(x, y/2,n);
		return (temp*temp)%n;
	}
	else {
		return ((x%n) * modExp(x, y-1,n))%n;
	}
}

int main()
{
	int N;
	int x, y, z;

	while(scanf("%d", &N)==1 && N)
	{
		for(int i=0; i<N; i++){
			scanf("%d %d %d", &x, &y, &z);
			printf("%d\n", modExp(x, y, z));
		}
	}

	return 0;
}
