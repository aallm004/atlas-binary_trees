#include "binary_trees.h"
/**
 *binary_tree_leaves - function that counts the leaves in a binary tree
 *
 *@tree: pointer to root node of tree
 *
 *Return: leaf or NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
