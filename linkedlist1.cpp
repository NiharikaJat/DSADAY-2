#include <iostream>
using nmaespace std;

class Node{
	public:
		int data;
		Node *next;
};

int main(){
	Node *head = NULL;
	Node *first = NULL;
	Node *Second = NULL;
	
	head = new Node();
	first = new Node();
	second = new Node();
	
	head->data = 1;
	head->next = first;
	first->data = 2;
	first->next = second;
	second->data = 3;
	second->next = NULL;
	
	
	return 0;
}
