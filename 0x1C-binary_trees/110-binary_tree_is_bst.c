#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if binary tree is proper binary search tree
 * @tree: input tree to check validity
 *
 * Return: 1 is is proper bst, 0 if false or failure
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int l_check, r_check;
	if (tree)
	{
		l_check = tree->left ? 1 : tree->left->n < tree->n ? 1 : 0;
		l_check = tree->left ? 1 : tree->left->n < tree->n ? 1 : 0
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
