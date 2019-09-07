#include <iostream>
#include <queue>
using namespace std;

main(){

	queue<int> myqueue;
	myqueue.push(1);
	myqueue.push(2);
	myqueue.push(3);
	cout<<"Size of queue:"<<myqueue.size()<<endl;
	cout<<"Back of queue:"<<myqueue.back()<<endl;
	while(!myqueue.empty()){
		cout<<"Popping : "<<myqueue.front()<<endl;
		myqueue.pop();
	}

	cout<<"Size of queue:"<<myqueue.size()<<endl;


	return 0;
}