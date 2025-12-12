#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + height(tree->left);
	if (tree->right)
		right_h = 1 + height(tree->right);

	if (left_h > right_h)
		return (left_h);
	return (right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = (tree->left ? (int)height(tree->left) + 1 : 0);
	right_h = (tree->right ? (int)height(tree->right) + 1 : 0);

	return (left_h - right_h);
}
