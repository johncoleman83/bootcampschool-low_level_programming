#include "binary_trees.h"
/**
 * bst - traverses binary tree with inorder functionality, and running 3
 * checks on each node.  Checks if minimum and maximum values are valid
 * and, checks the recursive calls to the same function are valid
 * @node: the node to be compared
 * @min: the minimum value to be checked with current node
 * @max: the maximum value to be checked with current node
 *
 * Return: 1 if node is valid binary search tree node, 0 if not
 */
int bst(const binary_tree_t *node, const binary_tree_t *min,
	const binary_tree_t *max)
{
	int valid = 1, checks = 0;

	if (node)
	{
		checks += !min || min->n < node->n;
		checks += !max || max->n > node->n;
		checks += (bst(node->left, min, node) &&
			   bst(node->right, node, max));
		valid = checks == 3;
	}
	return (valid);
}
/**
 * binary_tree_is_bst - checks if binary tree is proper/ valid binary search
 * tree, balance factor is not considered
 * @tree: input tree to check validity
 *
 * Return: 1 if is proper bst, 0 if false or failure
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (tree && bst(tree, NULL, NULL));
}
