#include "binary_trees.h"

/**
  * binary_tree_is_root - Check if a given node is root of a tree.
  *
  * @node: Node to check.
  *
  * Return: 1 if root, 0 otherwise.
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
