#include "binary_trees.h"

/**
  * binary_tree_node - Create a new binary tree node.
  *
  * @parent: Parent of the new node.
  * @value: Value held by the new node.
  *
  * Return: Pointer to new node, NULL otherwise.
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (!parent)
		new->parent = NULL;
	else
		new->parent = parent;

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
