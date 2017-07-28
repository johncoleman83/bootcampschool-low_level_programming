#include "binary_trees.h"
/**
 * bt_height - returns height of a binary tree + 1, so leaves have height 1, &
 * NULL value is distinguishable from root leaf node by having height 0
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
 * bt_balance - modified balance factor function that returns 1 or more if
 * any node in the tree has a balance factor with absolute value > 1. where
 * balance factor is the height of tree->left - height of tree->right
 * @node: root of binary tree to find the balance factor
 *
 * Return: 0 if balanced, non-0 if not
 */
int bt_balance(const binary_tree_t *node)
{
	int balance = 0, bal;

	if (node)
	{
		bal = bt_height(node->left) - bt_height(node->right);
		balance += (bal < 0 ? bal * -1 : bal) > 1;
		balance += bt_balance(node->left) + bt_balance(node->right);
	}
	return (balance);
}
/**
 * bst - traverses binary tree with inorder functionality, and running 3
 * checks on each node.  Checks if minimum and maximum values are valid
 * and, checks the recursive calls to the same function are valid
 * @node: the node to be compared
 * @min: the minimum value to be checked with current node
 * @max: the maximum value to be checked with current node
 *
 * Return: 1 if node is valid binary search tree node, 0 if not
 */
int bst(const binary_tree_t *node, const binary_tree_t *min,
	const binary_tree_t *max)
{
	int valid = 1, checks = 0;

	if (node)
	{
		checks += min ? min->n < node->n : 1;
		checks += max ? max->n > node->n : 1;
		checks += (bst(node->left, min, node) &&
			   bst(node->right, node, max));
		valid = checks == 3;
	}
	return (valid);
}
/**
 * binary_tree_is_avl - checks if binary tree is proper/ valid avl binary
 * search tree, balance factor is considered
 * @tree: input tree to check validity
 *
 * Return: 1 if is proper bst, 0 if false or failure
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	return (tree && bst(tree, NULL, NULL) && !bt_balance(tree));
}
