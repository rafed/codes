#include<iostream>

using namespace std;

int main(){

    int N, n, maximum, input, i;

	cin>>N;
    for(i=1; i<=N; i++){
        maximum=0;
        cin>>n;
        while(n--){
			cin>>input;
			if(input>maximum) maximum=input;
        }
        cout<<"Case "<< i << ": " << maximum << endl;
    }

	return 0;

}
