#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	free(tree->left);
	free(tree->right);
	free(tree);
}