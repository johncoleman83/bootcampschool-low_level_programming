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
 * binary_tree_balance - returns balance factor of binary tree
 * that is, the height of tree->left - height of tree->right
 * @tree: root of binary tree to find the balance factor
 *
 * Return: height of binary tree in size_t type
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	size_t r, l;

	if (tree)
	{
		l = bt_height(tree->left);
		r = bt_height(tree->right);
		balance = l - r;
	}
	return (balance);
}
