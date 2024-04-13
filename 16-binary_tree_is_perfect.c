#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of binary tree
 *
 *@tree: pointer to root node of tree to measure height
 *
 *Return: height of tree 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	
	if (tree->left_height == NULL && tree->right_height == NULL)
		return (0);

	left_heiight = binary_tree_height(tree->left_height);
	right_height = binary_tree_height(tree->right_height);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 *binary_tree_is_perfect - func that checks if a binary tree is perfect
 *
 *@tree: pointer to the root node of the tree to check
 *
 *Return: 
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	if (tree->left == NULL || tree-right == NULL)
		return (0);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	
	if (left == 0 || right == 0)
		return (0);
	
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	
	return(0);
}