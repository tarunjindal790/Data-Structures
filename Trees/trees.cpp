#include<iostream>
using namespace std;


class BST{
	struct BSTNode{
		int data;
		BSTNode* left;
		BSTNode* right;
	};
	BSTNode* root;
public:
	BST(){
		root=NULL;
	}

	BSTNode* GetNewNode(int data){
		BSTNode* temp=new BSTNode;
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
	}

	void Insert(int data){
		root=ActualInsert(root,data);
	}

	BSTNode* ActualInsert(BSTNode* root,int data){
		if(root==NULL){
			root=GetNewNode(data);
		}
		else if(data<=(root->data)){
			root->left=this->ActualInsert(root->left,data);
		}
		else{
			root->right=this->ActualInsert(root->right,data);
		}
		return root;
	}

	void displayInOrder(){
		ActualdisplayInOrder(root);
	}

	void ActualdisplayInOrder(BSTNode* root){
	//display left
		if(root->left){
			ActualdisplayInOrder(root->left);	
		}
	//display root
		cout<<root->data<<" ";
	//display right
		if(root->right){
			ActualdisplayInOrder(root->right);
		}
	}
};






int main(){
	BST b1;

	b1.Insert(4);
	b1.Insert(1);
	b1.Insert(3);
	b1.Insert(4);
	b1.displayInOrder();
	

	return 0;

}