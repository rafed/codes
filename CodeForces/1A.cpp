#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned long long int ll;

int main(){

	ll n, m, a;
	
	while(cin >> n >> m >> a){
		cout << (n%a ? n/a+1 : n/a) * (m%a ? m/a+1 : m/a) << endl;
	}

	return 0;

}
