#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of input node
 * @node: node to check for a sibling
 *
 * Returns: pointer to sibling or NULL if none or failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
		return (node->parent->right == node ? node->parent->left :
				node->parent->right);
	else
		return (NULL);
}
