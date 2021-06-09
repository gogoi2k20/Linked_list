//@Gaurav Gogoi
//suppose we are given a linked list like : 1->2->3->4->5
// we need to insert a node, say 0 at the beginning of the linked list

//solution approach: we know that a linked list is characterised by the head pointer, we only need the head pointer to solve the problem
//steps
//step 1: create a new Node 
//step 2: point its next to the original head pointer of the linked list, and it's solved

#include<iostream>
using namespace std;
struct Node{
	int  data;
	Node *next;
Node(int  x){
data=x;
next=NULL;
}
};
void printList(Node* new_head){
	Node* curr=new_head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
int main(){
//Given linked list
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif  
Node* head=new Node(1);
head->next=new Node(2);
head->next->next=new Node(3);
head->next->next->next=new Node(4);
head->next->next->next->next=new Node(5);

// Taking input from user, which will determine what will be data value of new Linked list
int n;
cin>>n;
Node* new_head=new Node(n);
new_head->next=head;

//printList_function
printList(new_head);



return 0;
}