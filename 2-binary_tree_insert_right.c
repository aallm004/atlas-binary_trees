#include "binary_trees.h"
/**
 *binary_tree_insert_right - function that inserts a node as the right child
 *
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *
 *Return: pointer to the created node or NULL
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
