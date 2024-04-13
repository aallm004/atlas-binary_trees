#include "binary_trees.h"
/**
 *binary_tree_node - function that creates a binary tree node
 *
 *@parent: parent of binary tree
 *@value: value for new node
 *
 * Return: pointer to new node or NULL
 **/
 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
 binary_tree_t *new

 new = malloc(sizeof(binary_tree_t));
 if (!new)
{
	printf("Malloc failure");
	return(NULL);
}

new->n = value;
new->left = NULL;
new->right = NULL;
new->parent = parent;
return(new);
}
