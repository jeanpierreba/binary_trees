#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: parent of the node
* @value: value of the node
* Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
