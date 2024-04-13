#include "binary_trees.h"
/**
 *binary_tree_balance - func that measures the balance factor
 *
 *@tree: pointer to root node of tree
 *
 *Return: balance or no
 */
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

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

int binary_tree_balance(const binary_tree_t *tree)
{
 	int left_height, right_height;

 	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}