#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of input node
 * @n: node to check for a sibling
 *
 * Returns: pointer to sibling or NULL if none or failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *n)
{
	if (n && n->parent)
		return (n->parent->right == n ? n->parent->left : n->parent->right);
	else
		return (NULL);
}
/**
 * binary_tree_uncle - returns the uncle/aunt of input node
 * @node: the input node to check for it's uncle
 *
 * Return: the uncle/ aunt of the input node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
		return (binary_tree_sibling(node->parent));
	else
		return (NULL);
}
