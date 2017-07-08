#include<iostream>
#include<cstdio>

using namespace std;

int main(){

	int N, i, input, res;

	for(i=1; ; i++){
		cin>>N;
		if(N==0) break;
		res=0;
		while(N--){
			cin>>input;
			if(input==0) res--;
			else res++;
		}
		printf("Case %d: %d\n", i, res);
	}

	return 0;

}
