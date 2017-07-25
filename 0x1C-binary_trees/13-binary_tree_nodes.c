#include "binary_trees.h"
/**
 * binary_tree_nodes - calculates the number of nodes with at least 1 child
 *  in a binary tree
 * @tree: the binary tree to check if there are nodes
 *
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += binary_tree_nodes(tree->right);
		nodes += binary_tree_nodes(tree->left);
	}
	return (nodes + (tree && (tree->left || tree->right)));
}
