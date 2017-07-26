#include "binary_trees.h"
/**
 * btl - traverses binary tree recursively, in level-order skipping root
 * @tree: the binary tree to parse
 * @func: the function to implement on the n int of each node
 */
void btl(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
		btl(tree->left, func);
		btl(tree->right, func);
	}
}
/**
 * binary_tree_levelorder - prints root and begins traversing
 * @tree: the binary tree to parse
 * @func: the function to implement on the n int of each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		btl(tree, func);
	}
}
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
/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: the binary tree to check
 *
 * Return: 1 if complete, 0 if not or upon error
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	check balance factor of every node, if all are 0 or +1, gtg.
	return ();
}
