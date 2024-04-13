#include "binary_trees.h"
/**
 *binary_tree_depth - func measures depth of a node
 *
 *@tree: pointer to the node to measure depth
 *
 *Return: depth, or 0
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth = 0;
	size_t right_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_depth = 1 + binary_tree_depth(tree->left);

	if (tree->right)
		right_depth = 1 + binary_tree_depth(tree->right);

	if (left_depth > right_depth)
		return (left_depth);
	else
		return (right_depth);
}
