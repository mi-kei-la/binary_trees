#include "binary_trees.h"

/**
  * binary_tree_size - Calculate the number of nodes in a tree.
  *
  * @tree: Tree to traverse.
  *
  * Return: Tree size.
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		count += binary_tree_size(tree->left);
	if (tree->right)
		count += binary_tree_size(tree->right);

	return (count + 1);
}
