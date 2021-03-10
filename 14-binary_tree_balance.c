#include "binary_trees.h"

/**
  * binary_tree_balance - Check if a binary tree is balanced.
  *
  * @tree: Root of tree to traverse.
  *
  * Return: Balance factor.
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l += tree_height(tree->left);
	r += tree_height(tree->right);

	return (l - r);
}


/**
  * tree_height - Recursively calculate the height of a tree.
  *
  * @tree: Tree to measure.
  *
  * Return: Height.
  */

int tree_height(const binary_tree_t *tree)
{
	int l_h = 0, r_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		l_h = tree_height(tree->left) + 1;
	if (tree->right)
		r_h = tree_height(tree->right) + 1;

	if (l_h > r_h)
		return (l_h);
	return (r_h);
}
