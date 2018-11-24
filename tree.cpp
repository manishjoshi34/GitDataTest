#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(){
	next = NULL;
	data = 0;
	}
	Node* addNode(int d,Node* head);
	void printList(Node* head);
};
Node*  Node::addNode(int d,Node* head)
{
	Node* temp = new Node();
	temp->data = d;
	temp->next = head;
	head=temp;
return head;
}
void Node::printList(Node* head){
	if(head==NULL)return;
Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

int main(){
	Node* head=new Node();
	head->data=0;
	head=head->addNode(1,head);
	head=head->addNode(2,head);
head->printList(head);
cout<<"testing vim from git"<<endl;
return 0;
}
