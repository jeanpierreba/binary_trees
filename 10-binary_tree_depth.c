#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: tree to measure the depth
* Return: depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		deep = 1 + binary_tree_depth(tree->parent);

	return (deep);
}
