#include "binary_trees.h"
/**
 * bt_height - returns height of a binary tree
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree)
	{
		r = bt_height(tree->right) + 1;
		l = bt_height(tree->left) + 1;
		return (r > l ? r : l);
	}
	else
		return (-1);
}
/**
 * binary_tree_height - returns height of a binary tree
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
		return (bt_height(tree));
	else
		return (0);
}
