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
 * binary_tree_is_perfect - checks if a binary tree is perfect, meaning
 * perfectly symetrical
 * @tree: the input binary tree to check if it's perfect
 *
 * Return: 1 if perfect, 0 if not or failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balanced = 1;
	size_t r, l;

	if (tree)
	{
		l = bthb(tree->left);
		r = bthb(tree->right);
		balanced = (l == r);
		if (balanced)
		{
			balanced -= binary_tree_is_perfect(tree->left) ? 0 : 1;
			balanced -= binary_tree_is_perfect(tree->right) ? 0 : 1;
		}
	}
	return (balanced < 1 ? 0 : 1);
}
