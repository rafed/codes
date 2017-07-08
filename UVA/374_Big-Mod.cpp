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
	int b, p, m;

	while(scanf("%d %d %d", &b, &p, &m)==3){
		printf("%d\n", modExp(b, p, m));
	}

	return 0;
}
