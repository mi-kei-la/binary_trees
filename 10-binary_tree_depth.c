#include "binary_trees.h"

/**
  * binary_tree_depth - Calculate depth of a given node.
  *
  * @tree: Tree to measure.
  *
  * Return: Depth.
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->parent == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
