#include "binary_trees.h"

/**
  * binary_tree_insert_right - Insert a new right node.
  *
  * @parent: Parent of the new node.
  * @value: Value of the new node.
  *
  * Return: pointer to new node, NULL otherwise.
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		new->right = parent->right;
		new->right->parent = new;
		parent->right = new;
	}

	return (new);
}
