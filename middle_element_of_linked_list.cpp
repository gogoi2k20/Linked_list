//@Gaurav Gogoi
//The problem statement says that we need to find to middle element of a linked list , and in case of even no of elements we have two nodes in middle , we need to return the 2nd one in that case
//the first solution that comes to mind is to count the no of nodes, say we have n nodes then we can simply go the n/2 th element of the liked list and return it as answer
// but it gonna require 2 traversals, having linear time complexity
//but the same problem can be solved in one traversal
// the idea is to use fast and slow pointers both heading to the head pointer at first , the fast pointers move two steps at a time and the slow moves one step
// when the fast pointer becomes null or next of fast is null ,then low stands exactly at the middle position
// let's prove it mathematically
// suppose we have to travel a distance of d, and have two competitors , a and b ; a moves one step at a time 
// b moves 2 steps at a time, so when b reaches a distance of d/2 a reaches the end, and a wins , and b reaches the middle
// so b is the middle position in case of linked list

#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
Node(int x){
data=x;
next=NULL;
}
};
void printList(Node *head){

	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int middle_of_linked_list(Node *head){
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
     slow=slow->next;
     fast=fast->next->next;

}
return slow->data;
}

int main(){

	
Node* head=new Node(1);
head->next=new Node(2);
head->next->next=new Node(3);
head->next->next->next=new Node(4);
head->next->next->next->next=new Node(5);

//printing the middle element
cout<<middle_of_linked_list(head);

//for the given, the output is 3
 


return 0;
}