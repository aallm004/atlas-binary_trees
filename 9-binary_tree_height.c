#include "binary_trees.h"
/**
 *binary_tree_height - func that measures height of binary tree
 *
 *@tree: pointer to the root node of tree
 *
 *Return: tree or null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (right_height < left_height)
		return (right_height);
	else
		return (left_height);
}
