#include "binary_trees.h"

/**
  * binary_tree_leaves - Count the number of leaves in a tree.
  *
  * @tree: Tree to traverse.
  *
  * Return: Number of leaves.
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (count + 1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
