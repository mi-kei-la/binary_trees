#include "binary_trees.h"

/**
  * binary_tree_is_perfect - Check if a binary tree is perfect.
  *
  * @tree: Tree to check.
  *
  * Return: 1 if perfect, 0 otherwise.
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree_size(tree->left);
	right = tree_size(tree->right);

	if (left == right)
		return (1);
	return (0);
}

/**
  * tree_size - Calculate the number of nodes in a tree.
  *
  * @tree: Tree to traverse.
  *
  * Return: Tree size.
  */

int tree_size(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		count += tree_size(tree->left);
	if (tree->right)
		count += tree_size(tree->right);

	return (count + 1);
}
