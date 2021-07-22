#include "binary_trees.h"

/**
* binary_tree_nodes - count the number of nodes of a binary tree
* @tree: root node of the tree to count the number of nodes
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		node = 1;

	if (tree->left)
		node += binary_tree_nodes(tree->left);

	if (tree->right)
		node += binary_tree_nodes(tree->right);

	return (node);
}
