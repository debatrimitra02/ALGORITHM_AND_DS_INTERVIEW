#include<iostream>

using namespace std;



struct node
{

	 int data;
	 node* left;
	 node* right;

};


struct node* NewNode(int data)
{

	struct node* node=(struct node*)malloc(sizeof(node));

	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;

}

//////////////////////Tree Traversal///////////////////////////

void inorder(struct node* node)
{

	if(node==NULL)
		return;
	inorder(node->left);
	cout<<node->data<<endl;
	inorder(node->right);
	
}


void preorder(struct node* node)
{
	if(node==NULL)
		return;
	cout<<node->data<<endl;
	preorder(node->left);
	preorder(node->right);

}

void postorder(struct node* node)
{
	if(node==NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<endl;
}

//////////////////Height Balanced////////////////

int maximum(int x, int y)
{
	if(x>y)
		return x;
	if(y>x)
		return y;
	else
		return x;

}

int  heightoftree(struct node* node)
{
	if(node==NULL)
		return 0;
	int left_height=heightoftree(node->left);
	int right_height=heightoftree(node->right);
	return (maximum(left_height,right_height)+1); 	

}

bool height_balanced(struct node* node)
{
	int left_height=heightoftree(node->left);
	int right_height=heightoftree(node->right);
	if(abs(left_height-right_height)>1)
	return false;
return true;
}


//////////////Check if Binary////////////////
/*
bool if_binary(struct node* node)
{
	if(node->left->data>node->data||node->right->data<node->data)
	return false;
	if_binary(node->left);
	if_binary(node->right);

	return true;


}*/
////////////////////Given a sorted (increasingorder) array with unique integer elements, write an algorithm to create a binary search tree with minimal height///////////////////

void create_tree(struct node* node,int arr[])

{
//	int n=sizeof(arr)/sizeof(int);
//	struct node* root=NewNode(arr[n/2]);
	




}





/////////////////////Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll have D linked lists)////////



int main()
{
	struct node* root= NewNode(5);
	root->left=NewNode(2);
	root->right=NewNode(7);
	cout<<"Inorder"<<endl;    //2,5,7
	inorder(root);
	cout<<"Preorder"<<endl;   //5,2,7
	preorder(root);
	cout<<"Postorder"<<endl;   //2,7,5
	postorder(root);
	cout<<"Height of tree"<<"....."<<heightoftree(root)<<endl;
	if(height_balanced(root)==false)
	cout<<"Not Balanced"<<endl;
	else
	cout<<"Balanced"<<endl;
/*
	if(if_binary(root)==false)
	cout<<"Not Binary"<<endl;
	else
	cout<<"Is Binary"<<endl;
*/
	return 0;
}



