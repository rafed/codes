#include<iostream>

using namespace std;

int main(){

	int N, farmers, land, animal, fertilizer, total;
	
	while(cin>>N){
		while(N--){
			total=0;
			cin>>farmers;
			while(farmers--){
				cin>>land>>animal>>fertilizer;
				total+=land*fertilizer;
			}
			cout<<total<<endl;
		}
	}

	return 0;
	
}
