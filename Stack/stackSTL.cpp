#include <iostream>
#include <stack>
using namespace std;

main(){

	stack<int> myStack;
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);
	cout<<"Size of stack:"<<myStack.size()<<endl;
	while(!myStack.empty()){
		cout<<"Popping : "<<myStack.top()<<endl;
		myStack.pop();
	}

	cout<<"Size of stack:"<<myStack.size()<<endl;


	return 0;
}