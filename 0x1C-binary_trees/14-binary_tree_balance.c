#include "binary_trees.h"
/**
 * bth - returns height of a binary tree
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type
 */
int bth(const binary_tree_t *tree)
{
	int r, l;

	r = tree ? bth(tree->right) + 1 : -1;
	l = tree ? bth(tree->left) + 1 : -1;
	return (r > l ? r : l);
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
		l = bth(tree->left);
		r = bth(tree->right);
		balance = l - r;
	}
	return (balance);
}
