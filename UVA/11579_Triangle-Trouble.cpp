#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

double area(double a, double b, double c){
	if(b+c<=a) return 0;
	double s = (a+b+c) / 2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
	double temp, result, ans;

	int N, n;
	scanf("%d", &N);

	while(N--){
		vector <double> arr;
		ans = -1;

		scanf("%d", &n);
		for(int i=0; i<n; i++)
		{
			scanf("%lf", &temp);
			arr.push_back(temp);
		}

		sort(arr.begin(), arr.end());

		for(int i=arr.size()-1; i>=2; i--){
			result = area(arr[i], arr[i-1], arr[i-2]);
			if(result> ans) ans = result;
		}

		printf("%.2lf\n", ans);

	}


	return 0;
}
