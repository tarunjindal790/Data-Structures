#include<iostream>
using namespace std;

class LinearArrayQueue{
	int front;
	int rear;
	int n;
	int queue[5];
	friend class CircularArrayQueue;
public:
	LinearArrayQueue(){
		front=rear=-1;
		n=5;
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

class CircularArrayQueue :public LinearArrayQueue{

public:

	void enqueue(int data){
		if((rear+1)%n==front){
			cout<<"Queue is full"<<endl;
			return;
		}
		else if(rear==-1 && front==-1){
			front=rear=0;
			queue[rear]=data;
			return;
		}
		else{
			rear=(rear+1)%n;
			queue[rear]=data;
			cout<<"Pushed into queue: "<<data<<endl;
			display();
		}
		
	}

};


int main(){
	LinearArrayQueue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.dequeue();
	q1.dequeue();
	q1.dequeue();

	CircularArrayQueue q2;
	q2.enqueue(1);
	q2.enqueue(2);
	q2.enqueue(3);
	q2.enqueue(4);
	q2.enqueue(5);
	q2.enqueue(6);
	q2.dequeue();
	q2.dequeue();
	q2.dequeue();

	return 0;
}