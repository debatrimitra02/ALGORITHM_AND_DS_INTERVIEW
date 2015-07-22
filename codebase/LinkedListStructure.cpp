#include<iostream>

using namespace std;

struct node
{
	int data;
	node* next; 
};

// TESTED -ok-----
void print_linked_list(node* head)
{
	node* current=head;
	while(current!=NULL)
	{
		
		cout<<current->data<<endl;
		current=current->next;	
	}

}

///----Tested -OK ----
void FindMiddleElement(node* head)
{
	struct node* fast=head;
	struct node* slow=head;
//	cout<<"head"<<head->data<<endl;

	if(head!=NULL)
	{
		while(fast->next!=NULL && fast->next->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;

		}

		cout<<"Middle Element"<<":"<<slow->data<<endl;
		return;
	}
	cout<<"HEAD NULL- ERROR"<<endl;

}
                   
// TESTED ---OK --
void DeleteAnElement(node* head,int val)
{
	node* current=head->next;
	node* behind=head;

	if(head->data==val)
	{
		head=current;
		return;	
	}

	while(current->data!=val && current->next!=NULL)
	{
		behind=current;
		current=current->next;
	}

	if(current->next==NULL)
	{
		cout<<"NOT FOUND"<<endl;
		return;
	}
	
	behind->next=current->next;
	
	
}

// TESTED -----OK ---
void DeleteMiddleElement(node* head)
{
	node* fast=head;
	node* slow=head;
	node* behind=head;

	
	fast=fast->next->next;
	slow=slow->next;
	
	while(fast->next!=NULL && fast->next->next!=NULL)
	{
		behind=behind->next;
		slow=slow->next;
		fast=fast->next->next;

	}
	behind->next=slow->next;
}

///////////////////////////Delete Middle Element Given the pointer to just the middle element////////////////////

// TESTED ---- OK ----

void delete_middle(node* middle)
{
	middle->data=middle->next->data;

	node *p=middle->next->next;
	middle->next=p;
}
/////////////////////////////Sort Linked List/////////////////////////////////////////////////////////////////////


/////////////////////////////Duplicate Removal in Linked List/////////////////////////////////////////////////////



/////////////////////////Reverse Linked List//////////////////////////////////////////////////////////////////////
void reverse(node* head)
{
	node* prev   = NULL;
    	node* current = head;
    	node* next;
    	while (current != NULL)
    	{
        	next  = current->next;  
        	current->next = prev;   
        	prev = current;
        	current = next;
    	}

    	head = prev;
}

/////////////////////////////////Palindrome Checker///////////////////////////////////////////////////////////////
void Palindrome(node* head)
{
	node* slow=head;
	node* fast=head;
	while(fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;

	}

	node* new_head=slow->next;
	slow->next=NULL;
	node* current=new_head->next;
	node* temp=new_head->next->next;

	current->next=head;
	head->next=NULL;
	head=current;
	current=temp;
	temp=temp->next;
}

int main()
{
	int arr[]={7,6,2,5};
/////////////////////////////////////////////// Inserting in a LL ///////////
	node* n;
	node* current;
	node* head;

	n=new node;

	head=n;
	current=n;

	n->data=arr[0];
	int size=sizeof(arr)/sizeof(arr[0]);
	
		
	for(int i=1; i<size;i++)
	{
		n=new node;
		n->data=arr[i];
		n->next=NULL;

		current->next=n;
		current=current->next;
//		cout<<i<<endl;
//		cout<<current->data<<endl;
	}
	
////////////////////////////////////////////////
	cout<<"INITIAL LINkeD LIST"<<endl;
	print_linked_list(head);
//	FindMiddleElement(head);
//	print_linked_list(head);

//	cout<<"Deleting 2"<<endl;
//	DeleteAnElement(head,2);

//	cout<<"AFTER DELETION"<<endl;
//	print_linked_list(head);
////////////////////////////////////
//	cout<<"Delete Middle Element"<<endl;
//	DeleteMiddleElement(head);
//	print_linked_list(head);
////////////////////////////////////
//	cout<<"Delete Middle Element With Reference"<<endl;
//	delete_middle(head->next->next);
//	print_linked_list(head);
//	cout<<"Sorted Linked List"<<endl;
//	Sort_List(head);
//	print_linked_list(head);
	cout<<"Reverse Linked List"<<endl;
	reverse(head);
	print_linked_list(head);
	return 0;
}
