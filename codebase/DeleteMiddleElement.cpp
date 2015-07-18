#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node* head_ref;

};



struct node* Newnode(int data)
{

	struct node* ND=(struct node*)malloc(sizeof(struct);
	ND->data=data;
	ND->head_ref=NULL;
	return node;
}






int main()
{
	struct node* Head=NewNode(1);





	return 0;
}
