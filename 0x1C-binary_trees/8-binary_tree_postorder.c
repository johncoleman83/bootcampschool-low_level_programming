#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses binary tree with postorder algorithm
 * @tree: root of binary tree to traverse
 * @func: pointer to function to use on each integer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
