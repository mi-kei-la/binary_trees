#include "binary_trees.h"

/**
  * binary_tree_sibling - Finds the sibling of a given node.
  *
  * @node: Node to search it's sibling.
  *
  * Return: Pointer to sibling, NULL if no sibling or if node is null.
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *aux = NULL;

	if (!node || !node->parent)
		return (NULL);

	aux = node->parent;
	if (aux->left->n == node->n)
		aux = aux->right;
	else
		aux = aux->left;

	return (aux);
}
