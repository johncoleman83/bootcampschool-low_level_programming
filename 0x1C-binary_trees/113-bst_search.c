#include "binary_trees.h"
/**
 * bst_search - searches for a value in a binary search tree
 * @tree: the input tree to search for values in
 * @value: the value to search for
 *
 * Return: pointer to the discovered node or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	while (tree && tree->n != value)
	{
		if (value > tree->n)
			tree = tree->right;
		else
			tree = tree->left;
	}
	return ((bst_t *)tree);
}
