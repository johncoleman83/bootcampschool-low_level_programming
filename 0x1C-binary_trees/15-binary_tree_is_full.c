#include "binary_trees.h"
/**
 * asym_node - calculates the number of asymetrical nodes in a binary tree
 * @tree: the binary tree to check if there are nodes
 *
 * Return: the number of asymetrical nodes
 */
size_t asym_node(const binary_tree_t *tree)
{
	size_t nodes = 0, asym = 0;

	if (tree)
	{
		nodes += asym_node(tree->right);
		nodes += asym_node(tree->left);
		asym += ((tree->left && !tree->right) || (tree->right && !tree->left));
	}
	return (nodes + (tree && asym));
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the input binary tree to check if it's full
 *
 * Return: 1 if full, 0 if not or failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	return (asym_node(tree) == 0);
}
