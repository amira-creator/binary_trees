#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
void binary_tree_level(const binary_tree_t *tree, size_t i,
				void (*func)(int));

/**
 * binary_tree_levelorder - Func that visits b-tree w/ level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Return: None
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, i;

	if (tree == NULL || func == NULL)
		return;
	level = binary_tree_height(tree);
	for (i = 1; i <= level; i++)
		binary_tree_level(tree, i, func);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: Height of the tree, 0 if otherwise
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
