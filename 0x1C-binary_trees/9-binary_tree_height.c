#include "binary_trees.h"
/**
 * binary_tree_height - returns height of a binary tree
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree)
	{
		r = binary_tree_height(tree->right) + 1;
		l = binary_tree_height(tree->left) + 1;
		return (r > l ? r : l);
	}
	else
		return (-1);
}
