#include "binary_trees.h"
/**
 *binaryy_tree_height - measures the height of binary tree
 *
 *@tree: pointer to root node of tree to measure height
 *
 *Return: height of tree 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height +1);
}

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
int binary_tree_balance(const binary_tree_t *tree)
{
 	int left_height, right_height;

 	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}