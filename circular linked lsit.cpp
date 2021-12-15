#include <iostream>
using namespace std;
//node structure
struct Node
{
	int data;
	Node* next;
};

class LinkedList 
{
	private:
	Node* head;
	public:
		
	LinkedList()
	{
		head = NULL;
	}
//Add new element at the start of the list
void push_front(int newElement) 
{
	Node* newNode = new Node();
	newNode->data = newElement;
	newNode->next = NULL;
	if(head == NULL) 
	{
		head = newNode;
 		newNode->next = head;
	}
	else 
	{
		Node* temp = head;
		while(temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head;
		head = newNode;
	}
 }
//display the content of the list
void PrintList()
{
	Node* temp = head;
	if(temp != NULL) 
	{
		cout<<"The list contains: ";
		while(true) 
		{
			cout<<temp->data<<" ";
			temp = temp->next;
			if(temp == head)
			break;
		}
 		cout<<endl;
	} 
	else 
	{
 		cout<<"The list is empty.\n";
	}
}
};


// test the code
int main() 
{
	LinkedList MyList;
//Add three elements at the start of the list.
	MyList.push_front(10);
 	MyList.push_front(20);
 	MyList.push_front(30);
 	MyList.PrintList();
 	
	return 0;
}
