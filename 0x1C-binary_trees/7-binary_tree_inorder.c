#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses binary tree with inorder functionality
 * @tree: root of binary tree to traverse
 * @func: pointer to function to use on each integer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
