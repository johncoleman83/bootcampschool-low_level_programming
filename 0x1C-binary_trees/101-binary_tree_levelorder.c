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
