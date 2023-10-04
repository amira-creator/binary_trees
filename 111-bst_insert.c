#include "binary_trees.h"

/**
 * bst_insert - Function that inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 * Return: New node, NULL otherwise
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL, *tmp_2 = NULL, *new_node = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));
	tmp = *tree;
	while (tmp)
	{
		tmp_2 = tmp;
		if (value < tmp->n)
			mp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}
}
