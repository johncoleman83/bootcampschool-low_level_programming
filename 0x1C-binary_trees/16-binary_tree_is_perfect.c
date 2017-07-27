#include "binary_trees.h"
/**
 * bth - returns height of a binary tree
 * @tree: root of binary tree to find the height of
 *
 * Return: height of binary tree in size_t type
 */
size_t bth(const binary_tree_t *tree)
{
	size_t r, l, height = 0;

	if (tree)
	{
		r = tree->right ? bth(tree->right) + 1 : 0;
		l = tree->left ? bth(tree->left) + 1 : 0;
		height += (r > l ? r : l);
	}
	return (height);
}
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
		size += (bt_size(tree->right) + bt_size(tree->left) + 1);
	return (size);
}
/**
 * power_of - finds x to the power of y
 * @x: base
 * @y: exponent
 * Return: result of x to power of y
 */
size_t power_of(size_t x, size_t y)
{
	return (y == 0 ? 1 : y == 1 ? x : (x * power_of(x, y - 1)));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect, meaning
 * perfectly symetrical
 * @tree: the input binary tree to check if it's perfect
 *
 * Return: 1 if perfect, 0 if not or failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, check, exponent;

	if (tree)
	{
		height = bth(tree);
		size = bt_size(tree);
		check = exponent = 0;

		while (exponent <= height)
			check += power_of(2, exponent++);
	}
	return (tree && check == size);
}
