#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if input node is the root of tree
 * @node: input node to check if it is root of a tree
 *
 * Return: 1 if node is root, 0 if not or upon failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
