#include<iostream>

using namespace std;

int main(){

	int i, N, l, b, h;

	cin>>N;
	for(i=1; i<=N; i++){
		cin>>l>>b>>h;
		if(l<=20 && b<=20 && h<=20) cout<<"Case "<<i<<": good"<<endl;
		else cout<<"Case "<<i<<": bad"<<endl;
	}

	return 0;

}
