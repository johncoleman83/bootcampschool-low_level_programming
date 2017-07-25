#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: the root of tree to measure the size of
 *
 * Return: the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree)
	{
		r = binary_tree_size(tree->right);
		l = binary_tree_size(tree->left);
		return (r + l + 1);
	}
	else
		return (0);
}
