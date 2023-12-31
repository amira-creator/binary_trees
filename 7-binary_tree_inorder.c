#include "binary_trees.h"

/**
 * binary_tree_inorder - Function visits a b-tree w/ in_order traversal
 * @tree: Pointer to root node of tree to traverse
 * @func: Pointer to a function to call for each node
 * Return: None
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
