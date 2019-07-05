#include<iostream>
using namespace std;

// using array

class ArrayStack{


int top;
int n;
int stack[50];
public:
	ArrayStack(){
		top=-1;
		n=50;

	}

	void push(int num){
	if(top>=(n-1)){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		stack[top]=num;
		cout<<"Pushed in stack: "<<num<<endl;
	}
	}

	int pop(){
		if(top<=-1){
			cout<<"Stack Underflow"<<endl;
		}
		else{
			int elem=stack[top];
			top--;
			cout<<"Popped element: "<<elem<<endl;
			return elem;
		}
	}

	void peek(){
		if(top<=-1){
			cout<<"Stack is empty"<<endl;
		}else{
			cout<<"Top of stack: "<<stack[top]<<endl;
		}
	}

};

class LinkedListStack{
	struct Node{
		int data;
		Node* next;
		};
		Node* head;
	public:
		LinkedListStack(){
			head=NULL;
		}
		void push(int data){
			Node* temp=new Node();
			Node* temp2=head;
			temp->data=data;
			temp->next=head;
			head=temp;
			cout<<"Pushed in stack: "<<data<<endl;
			top();
		}
		int pop(){
			if(head==NULL){
				cout<<"Stack Underflow"<<endl;
				//how to return nothing here?
				return 0;
			}
			Node* temp=head;
			head=head->next;
			cout<<"Deleted: "<<temp->data<<endl;
			int temp2=temp->data;
			delete(temp);
			top();
			return temp2;
		}
		void top(){
			if(head==NULL){
				cout<<"Stack is empty"<<endl;
			}else{
			cout<<"Top of stack: "<<head->data<<endl;
			}
		}

};




int main(){
	ArrayStack s1;
	s1.push(1);
	s1.push(2);
	s1.pop();
	s1.peek();

	LinkedListStack l1;
	l1.push(1);
	l1.push(2);
	l1.pop();
	l1.pop();
	return 0;
}