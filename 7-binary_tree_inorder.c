#include "binary_trees.h"
/**
 *binary_tree_inorder - function that goes through a binary tree using in-order traversal
 *
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 *
 *Return: Nothing
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}