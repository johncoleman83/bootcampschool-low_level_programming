#include "binary_trees.h"
/**
 * bt_size - calculates the size of a binary tree
 * @tree: the root of tree to measure the size of
 *
 * Return: the size of the binary tree
 */
size_t bt_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
		size += (bt_size(tree->right) +
			 bt_size(tree->left) + 1);
	return (size);
}
/**
 * bt_c - checks if a binary tree is complete using index < size traversal
 * @n: the node to check the index of
 * @i: the expected index
 * @s: the size of the entire tree
 *
 * Return: 1 if complete, 0 if not or NULL
 */
int bt_c(const binary_tree_t *n, size_t i, size_t s)
{
	return (!n ? 1 : (i < s &&
			  bt_c(n->left, 2 * i + 1, s) &&
			  bt_c(n->right, 2 * i + 2, s)));
}
/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: the binary tree to check
 *
 * Return: 1 if complete, 0 if not or upon error
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, index = 0;

	size = bt_size(tree);
	return (size && bt_c(tree, index, size));
}
