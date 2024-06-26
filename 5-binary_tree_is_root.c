#include "binary_trees.h"
/**
 *binary_tree_is_root - function that checks if a given node is a root
 *
 *@node: pointer to the node to check
 *
 *Return: 1 if node, otherwise 0
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root = 0;

	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		is_root = 0;

	else if (node->parent == NULL)
		is_root = 1;

	return (is_root);
}
