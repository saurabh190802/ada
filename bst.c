#include<stdio.h>
#include<stdlib.h>

struct node{
	int key;
	struct node *right,*left;
};

//create a node
struct node *Newnode(int item){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp -> key = item;
	temp -> right = temp -> left = NULL;
	return temp;
}

//inorder traversal
void inorder(struct node *root){
	if(root!=null){
		inorder(root->left);
		printf("%d",root->key);
		inorder(root->right);
	}
}

