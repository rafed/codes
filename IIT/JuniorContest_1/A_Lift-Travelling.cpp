#include <cstdio>

int main()
{
	int T;
	int mypos, liftpos, ans;

	scanf("%d", &T);
	for(int i=1; i<=T; i++)
	{
		scanf("%d %d", &mypos, &liftpos);
		if(liftpos >= mypos){
			ans = liftpos*4 + 9 + 10;
		}
		else {
			ans = (mypos-liftpos)*4;
			ans += mypos*4 + 9 + 10;
		}
		printf("Case %d: %d\n", i, ans);
	}
}
