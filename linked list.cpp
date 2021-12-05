#include<iostream>
using namespace std;

struct node 
{
	int data;
	node* next;
};

class linkedlist
{
	public:
		node* head;
		
		linkedlist()
		{
			head = NULL;
		}
		
	void printlist()
	{
		node* temp = head;
		if(temp!= NULL)
		{
			cout<<"the list contain";
			while(temp != NULL)
			{
				cout<<temp->data<<" ";
				temp = temp->next;	
			}
			cout<<"\n";
			
		}
		else
		{
			cout<<"the list is empty";
		}
	}	
};

int main()
{
	linkedlist mylist;
	
	node* first= new node();
	first->data= 10;
	first->next= NULL;
	
	mylist.head = first;
	
	node* second= new node();
	second->data= 20;
	second->next= NULL;
	
	first->next = second;
	
	node* third= new node();
	third->data= 30;
	third->next= NULL;
	
	second->next = third;
	
	
	mylist.printlist();
	
	return 0;
	

	
}