#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if input node is a leaf node
 * @node: node to check if it is a leaf
 *
 * Return: 1 if leaf, 0 if not or upon failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && (!node->left && !node->right));
}
