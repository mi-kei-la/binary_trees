#include "binary_trees.h"

/**
  * binary_tree_uncle - Find the uncle of a given node.
  *
  * @node: Node to search.
  *
  * Return: Pointer to uncle node, NULL if no node or no uncle.
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *aux = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	aux = node->parent->parent;
	if ((aux->left && !aux->right) || (!aux->left && aux->right))
		return (NULL);
	if (aux->left->n == node->parent->n)
		aux = aux->right;
	else
		aux = aux->left;

	return (aux);
}
