#include "binary_trees.h"
/**
 * binary_tree_depth - returns depth of input node
 * @node: input node to check the depth of
 *
 * Return: depth of the input node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node)
		while (node->parent)
			depth++, node = node->parent;

	return (depth);
}
