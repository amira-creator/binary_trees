#include "binary_trees.h"

int remove_children(bst_t *root);
int children(bst_t *root);
int successor(bst_t *node);

/**
 * bst_remove - Function that removes a node from a BST tree
 * @root: The root of a binary tree
 * @value: The node with value to remove
 * Return: Tree changed
*/
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		type = remove_children(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
}
