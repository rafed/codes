#include <iostream>

using namespace std;

class myObject{
	int head, tail;
public:
	myObject();
	void setHead(int x);
	int getHead();
	int getTail();	
};

myObject::myObject(){
	tail = 69;
}

int myObject::getHead(){
	return head;
}

void myObject::setHead(int x){
	head = x;
}

int myObject::getTail(){
	return tail;
}

int main()
{
	myObject a;
	
	a.setHead(10);
	
	cout << a.getHead() << endl;
	cout << a.getTail() << endl;

	return 0;
}
