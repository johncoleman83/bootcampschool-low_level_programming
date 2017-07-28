#include "binary_trees.h"
/**
 * bt_height - returns height of a binary tree + 1, so leaves have height 1, &
 * NULL value is distinguishable from root leaf node
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type + 1
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t r, l, height = 0;

	if (tree)
	{
		r = tree ? bt_height(tree->right) + 1 : 0;
		l = tree ? bt_height(tree->left) + 1 : 0;
		height += (r > l ? r : l);
	}
	return (height);
}
/**
 * binary_tree_balance - returns balance factor of binary tree
 * that is, the height of tree->left - height of tree->right
 * @tree: root of binary tree to find the balance factor
 *
 * Return: height of binary tree in size_t type
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (bt_height(tree->left) - bt_height(tree->right));
	return (0);
}
