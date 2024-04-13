#include "binary_tree.h"
/**
 *binary_tree_nodes - function that counts the nodes with child
 *
 *@tree: pointer to the root node
 *
 *Return: nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	nodes = binary_tree_nodes(tree->left);
	nodes = binary_tree_nodes(tree->right);

	return (nodes);
}
