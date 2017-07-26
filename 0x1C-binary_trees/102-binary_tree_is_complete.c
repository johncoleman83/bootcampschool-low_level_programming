#include "binary_trees.h"
/**
 * binary_tree_levelorder - parses binary tree in level-order traversal
 * @tree: the binary tree to parse
 * @func: the function to implement on the n int of each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		if (!tree->parent)
			func(tree->n);
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
int left_leaf_count(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += binary_tree_leaves(tree->right);
		leaves += binary_tree_leaves(tree->left);
	}
	return (leaves + (tree && (!tree->left && !tree->right)));
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
