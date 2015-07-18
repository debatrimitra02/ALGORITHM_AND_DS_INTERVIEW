#include<iostream>


using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};



struct node* NewNode(int data)
{
	struct node* node= (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;

}










int main()
{
	struct node* head=NewNode(1);
	head->left=NewNode(2);
	head->left->left=NewNode(3);
	return 0;
}
