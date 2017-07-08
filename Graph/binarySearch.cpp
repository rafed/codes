#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main(){

	ifstream myfile;
	vector<int> array;
	int input;
	
	myfile.open("in.txt");
	
	myfile >> input;
	while(!myfile.eof()){
		array.push_back(input);
		myfile >> input;
	}
	
	//sorting
	sort(array.begin(), array.end());
	
	//print sorted array
	for(int i=0; i<array.size(); i++){
		cout << i+1 << ' ' << array[i] << endl;
	}
	
	//binary search
	
	for(;;){
		int min, max, middle, position=-1;
	
		cout << "Enter key to search: ";
		int searchKey;
		cin >> searchKey;
		
		min=0;
		max=array.size()-1;
		
		while(min<=max){
			middle=(min+max)/2;
			if(array[middle]==searchKey){
				position=middle+1;			
				break;
			}
			else if(array[middle] > searchKey) max=middle-1;
			else min=middle+1;
		}
		
		if(position!=-1) cout << searchKey << " found in position " << position << endl;
		else cout << "Number not found" << endl;
	}

	return 0;

}
