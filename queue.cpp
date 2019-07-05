#include<iostream>
using namespace std;

class Queue{
	int front;
	int rear;
	int n;
	int queue[50];
public:
	Queue(){
		front=rear=-1;
		n=50;
	}
	void enqueue(int data){
		if(rear>=n-1){
			cout<<"Queue is full"<<endl;
			return;
		}
		else if(rear==-1 && front==-1){
			front=rear=0;
			queue[rear]=data;
			return;
		}
		else{
			rear++;
			queue[rear]=data;
			cout<<"Pushed into queue: "<<data<<endl;
			display();
		}
		
	}
	void dequeue(){
		if(rear==-1 && front==-1){
			cout<<"Queue is empty"<<endl;
			return;
		}else if(front==rear){
			cout<<"Removed from queue: "<<queue[front]<<endl;
			front=rear=-1;
			display();
		}
		else{
			cout<<"Removed from queue: "<<queue[front]<<endl;
			front++;
			display();
		}

	}
	void display(){
		if(rear==-1 && front==-1){
			cout<<"Queue is empty"<<endl;
			return;
		}else{
			cout<<"Queue: ";
			for(int i=front;i<=rear;i++){
				cout<<queue[i]<<" ";
			}
			cout<<endl;
		}
	}


};

//for circular arrays
//current pos:i
//next pos:(i+1)%n
//prev pos:(i+n-1)%n
//implement here



int main(){
	Queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.dequeue();
	q1.dequeue();
	q1.dequeue();

	return 0;
}