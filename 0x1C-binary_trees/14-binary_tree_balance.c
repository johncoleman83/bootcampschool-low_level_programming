#include "binary_trees.h"
/**
 * bthb - returns height of a binary tree + 1, so leaves have height 1, and
 * NULL value is distinguishable from root leaf node
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type + 1
 */
size_t bthb(const binary_tree_t *tree)
{
	size_t r, l, height = 0;

	if (tree)
	{
		r = tree ? bthb(tree->right) + 1 : 0;
		l = tree ? bthb(tree->left) + 1 : 0;
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
	int balance = 0;
	size_t r, l;

	if (tree)
	{
		l = bthb(tree->left);
		r = bthb(tree->right);
		balance = l - r;
	}
	return (balance);
}
