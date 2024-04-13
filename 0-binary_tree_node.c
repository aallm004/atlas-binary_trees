#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *
 *@parent: parent of binary tree
 *@value: value for new node
 *
 * Return: pointer to new node or NULL
 **/
 binary_tree_h *binary_tree_node(binary_tree_t *parent, int value)
{
 binary_tree_t *node

 node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	return (NULL);

node->n = value;
node->left = NULL;
node->right = NULL;
node->parent = parent;
return(node);
}
