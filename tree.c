#include "tree.h"

NODE* get_node()
{
	NODE *temp;
	if((temp = (NODE *)malloc(sizeof(NODE))) == NULL)
	{
		return -1;
	}
	temp->left = NULL;
	temp->right - NULL;
	temp->key = 0;
	return temp;
}

NODE* insert(NODE *root, int key)
{
	if(root == NULL)
	{
		root = get_node();
		root->key = key;
		return root;
	}
	if(key < root->key)
	{
		(void)insert(root->left, key);
	}
	else if(key >= root->key)
	{
		(void)insert(root->right, key);
	}
}

NODE *search_tree(NODE *root, int search_key)
{
	NODE *found = NULL;
	if(root == NULL) {
		return NULL;
	}
	if(search_key == root->key)
	{
		return root;
	}
	if(search_key < root->key)
	{
		found = search_tree(root->left, search_key);
		return found;
	}
	if(search_key > root->key)
	{
		found = search_tree(root->right, search_key);
		return found;
	}
}

void delete_tree(NODE *root)
{
	NODE *left = root->left;
	NODE *right = root->right;

	free(root);
	if(left)
	{
		delete_tree(left);
	}
	if(right)
	{
		delete_tree(right);
	}
}

