#include "binary_trees.h"

/**
  * binary_tree_insert_left - Insert a new left node.
  *
  * @parent: Parent of the new node.
  * @value: Value of the new node.
  *
  * Return: pointer to new node, NULL otherwise.
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->right = NULL;
	new->parent = parent;

	if (new->parent->left == NULL)
	{
		new->parent->left = new;
		new->left = NULL;
	}
	else
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}

	return (new);
}
