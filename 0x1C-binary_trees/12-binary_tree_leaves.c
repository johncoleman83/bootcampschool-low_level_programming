#include "binary_trees.h"
/**
 * binary_tree_leaves - calculates the number of leaves in a binary tree
 * @tree: the binary tree to check if there are leaves in it
 *
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += binary_tree_leaves(tree->right);
		leaves += binary_tree_leaves(tree->left);
	}
	return (leaves + (tree && (!tree->left && !tree->right)));
}
