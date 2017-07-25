#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: the root of tree to measure the size of
 *
 * Return: the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r, l, sum;

	if (tree)
	{
		r = binary_tree_size(tree->right) + 1;
		l = binary_tree_size(tree->left) + 1;
		sum = r + l - (tree->parent ? 0 : 1);
		return (sum ? sum : 1);
	}
	else
		return (-1);
}
