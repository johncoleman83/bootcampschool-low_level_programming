#include "binary_trees.h"
/**
 * btp - binary tree nodes using pre-order traversal
 * @tree: the tree to parse through
 * @func: pointer to function to pass value of node to
 */
int btp(const binary_tree_t *tree, size_t height)
{
	int complete = 1;

	if (tree)
	{
		if (!tree->left && !tree->right)
			complete = check_depth(tree, height);
		else
		{
			if (tree->left)
			return (btp(tree->left, height);
			btp(tree->right, height);
		}
	}
}
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
 * bthc - returns height of a binary tree
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type
 */
size_t bthc(const binary_tree_t *tree)
{
	size_t r, l, height = 0;

	if (tree)
	{
		r = tree->right ? bthc(tree->right) + 1 : 0;
		l = tree->left ? bthc(tree->left) + 1 : 0;
		height += (r > l ? r : l);
	}
	return (height);
}
/**
 * bt_depth - returns depth of input node
 * @node: input node to check the depth of
 *
 * Return: depth of the input node
 */
size_t bt_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node)
		while (node->parent)
			depth++, node = node->parent;

	return (depth);
}
int check_depth(const binary_tree_t *bt_node, size_t height)
{
	size_t depth;
	static int flag = 0;

	depth = bt_depth(bt_node);

	if (depth < height - 1)
		return (0);
	else if (flag && depth == height)
		return (0);
	else if (depth < height)
	{
		flag = 1;
		return (1);
	}
	else
		return (1);
}
/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: the binary tree to check
 *
 * Return: 1 if complete, 0 if not or upon error
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t height;

	if (tree)
	{
		height = bthc(tree);

		btp(tree, height);
	}
}
