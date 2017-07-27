#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the input binary tree to check if it's full
 *
 * Return: 1 if full, 0 if not or failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (tree->left && !tree->right) || (tree->right && !tree->left))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
