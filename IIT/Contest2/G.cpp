#include <cstdio>

typedef long long int INT;

int main(){

	int T;

	INT numOfPoints, numOfRanges;
	INT first, last;
	INT r1, r2;

	scanf("%d", &T);

	for(int i=1; i<=T; i++)
	{
		scanf("%lld %lld", &numOfPoints, &numOfRanges);
		INT *arr = new INT[numOfPoints];
		for(int j=0; j<numOfPoints; j++)
		{
			scanf("%lld", &arr[j]);
		}
		for(int j=0; j<numOfRanges; j++)
		{
            scanf("%lld %lld", &r1, &r2);

            for(int k=0; ; k++)
			{
				if(arr[k] >= r1){
					first = k;
					break;
				}
			}
			for(int k=numOfPoints-1; ; k--)
			{
				if(arr[k] <= r2)
				{
					last = k;
					break;
				}
			}

			printf("%lld\n", last-first+1);

		}
		delete[] arr;
	}

	return 0;

}
