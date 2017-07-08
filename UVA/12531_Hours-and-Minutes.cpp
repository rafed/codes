#include<iostream>

using namespace std;

int main(){

    int input;

    while(cin>>input){
        if(input%6) cout<<"N"<<endl;
        else cout<<"Y"<<endl;
    }

	return 0;

}
