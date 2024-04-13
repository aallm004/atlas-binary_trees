#include "binary_trees.h"
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

	if(tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	if (tree->left ==NULL || tree-right == NULL)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	
	if (left == 0 || right == 0)
		return (0);
	
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	
	return(0);
 }