#include "binary_trees.h"

/**
* binary_tree_delete - delete the entier tree
*
* @tree: root node of the tree
*
* Return : nothing if tree are NULL
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
