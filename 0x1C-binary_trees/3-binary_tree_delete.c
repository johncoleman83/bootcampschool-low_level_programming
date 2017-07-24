#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree, use with caution!
 * @tree: the binary tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
