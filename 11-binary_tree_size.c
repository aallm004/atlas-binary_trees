#include "binary_trees.h"
/**
 *binary_tree_size - func that measures the size of binary tree
 *
 *@tree: pointer to the root node of the tree
 *
 *Return: size or NULL
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (node == NULL)
		return (0);
	else
		return(size(node->left) + 1 + size(node->right));
}