
#include<bits/stdc++.h>
using namespace std;
struct tree
{
	int data;
	tree *left;
	tree *right;
}*root=NULL;

void pre(tree *node)
{
	
	if(node==NULL)
	return;
//	cout<<"hello"<<endl;
	cout<<node->data<<endl;
	pre(node->left);
	pre(node->right);
}
tree *insert(tree *node,int k)
{
	if(node==NULL)
	{
		node=new tree;
		node->data=k;
		node->left=NULL;
		node->right=NULL;	
	}
	else if(node->data>k)
	{
		node->left=insert(node->left,k);
	}	
	else if(node->data<k)
	{
		node->right=insert(node->right,k);
	}
	return  node;
}

int main()
{
	root=insert(root,60);
	insert(root,50);
	insert(root,80);
	insert(root,40);
	insert(root,70);
	pre(root);
	
}



