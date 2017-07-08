#include<iostream>

using namespace std;

int main(){

    int T;
    int m, n;
    int x, y;

    while(cin>>T && T!=0){
        cin>>m>>n;
        while(T--){
            cin>>x>>y;
            if(x==m || y==n) cout<<"divisa"<<endl;
            else if(x>m){
				if(y>n) cout<<"NE"<<endl;
				else cout<<"SE"<<endl;
            }
            else if(x<m){
				if(y>n) cout<<"NO"<<endl;
				else cout<<"SO"<<endl;
            }
        }
    }

	return 0;

}
