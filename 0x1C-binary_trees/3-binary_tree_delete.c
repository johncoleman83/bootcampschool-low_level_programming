#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree, use with caution!
 * @tree: the binary tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree)
	{
		left = tree->left;
		right = tree->right;
		binary_tree_delete(right);
		binary_tree_delete(left);
		free(tree);
	}
}
