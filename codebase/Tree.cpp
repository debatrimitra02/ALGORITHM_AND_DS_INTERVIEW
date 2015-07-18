#include<iostream>
#include<string>


using namespace std;

struct node
{

	int data;
	node* left;
	node* right;
};


struct node*  NewNode(int data)
{
	struct node* node= (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;

}



void preorder(struct node* node)
{
	if(node==NULL)
		return;

	cout<<node->data<<endl;
	preorder(node->left);
	preorder(node->right);

}

void inorder(struct node* node)
{

	if(node==NULL)
		return;
	inorder(node->left);
	cout<<node->data<<endl;
	inorder(node->right);

}



void postorder(struct node* node)
{

	if(node==NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<endl;
}


int maxima(int x, int y)
{
	if(x>y)
		return x;
	if(y>x)
		return y;
	return x;
	
}
int heightoftree(struct node* node)
{
	if(node==NULL)
		return 0;
	int left_ht=heightoftree(node->left);
	int right_ht=heightoftree(node->right);

	return max(left_ht,right_ht)+1;
	
}

bool height_balance(struct node* node)
{
	if(node==NULL)
		return 0;
	int left_height=heightoftree(node->left);
	int right_height=heightoftree(node->right);
	if(abs(left_height-right_height)>1)
		return false;
return true;
}

//////////Given a sorted (increasingorder) array with unique integer elements, write an algorithm to create a binary search tree with minimal height

struct node* tree_from_array(int arr[],int L,int R)
{
	if(L>R)
		return NULL;
	int mid=(L+R)/2;
	struct node* root=NewNode(arr[mid]);

	root->left=tree_from_array(arr,L,mid-1);
	root->right=tree_from_array(arr,mid+1,R);

	return root;

}



//////////Given a binary tree, design an algorithm which creates a linked list of all the nodes at each depth (e.g., if you have a tree with depth D, you'll have D linked lists).



////////////Write an algorithm to find the'next'node (i.e., in-order successor) of a given node in a binary search tree. You may assume that each node has a link to its parent.i

/*
bool check_binary(struct node* node)
{
	if(node->left->data > node->data ||  node->right->data < node->data)
		return false;
	check_binary(node->left);
	check_binary(node->right);
	
	return true;
}
*/

int main()
{

//	struct node* root=NewNode(100);
//	root->left=NewNode(2);
//	root->right=NewNode(300);

/*	
	preorder(root);
	cout<<"post"<<endl;
	postorder(root);
	cout<<"in"<<endl;
	inorder(root);
	
	cout<<"Height"<<"..... "<<heightoftree(root)<<endl;
	if(height_balance(root)==true)
	cout<<"Balanced"<<endl;
	else
	cout<<"Not Balanced"<<endl;
	
//	if(check_binary(root)==true)
//		cout<<"BST"<<endl;
//	if(check_binary(root)==false)
//		cout<<"not BST"<<endl;

*/

	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);

	int L=0;
	int R=size-1;
	struct node* tree=tree_from_array(array,L,R);
	
	preorder(tree);	
return 0;

}
