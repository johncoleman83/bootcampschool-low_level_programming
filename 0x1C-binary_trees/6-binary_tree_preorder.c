#include "binary_trees.h"
/**
 * binary_tree_preorder - binary tree nodes using pre-order traversal
 * @tree: the tree to parse through
 * @func: pointer to function to pass value of node to
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
