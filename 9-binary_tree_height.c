#include "binary_trees.h"

/**
  * binary_tree_height - Recursively calculate the height of a tree.
  *
  * @tree: Tree to measure.
  *
  * Return: Height.
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h = 0, r_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		l_h = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r_h = binary_tree_height(tree->right) + 1;

	if (l_h > r_h)
		return (l_h);
	return (r_h);
}
