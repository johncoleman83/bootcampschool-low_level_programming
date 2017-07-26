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
