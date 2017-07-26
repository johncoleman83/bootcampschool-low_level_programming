#include "binary_trees.h"
/**
 * is_descendant - checks if input offspring is descendant of root
 * @root: root to check for descendants
 * @offspring: offspring to check if it's a descendant
 *
 * Return: 1 if is descendant, 0 if not or error
 */
int is_descendant(const binary_tree_t *root, const binary_tree_t *offspring)
{
	int descendant = 0;

	if (root)
	{
		descendant = (root->right == offspring || root->left == offspring);
		if (!descendant)
		{
			descendant += is_descendant(root->right, offspring);
			descendant += is_descendant(root->left, offspring);
		}
	}
	return (descendant);
}
/**
 * binary_trees_ancestor - seeks for lowest common ancestor
 * @first: first node to check for common ancestor
 * @second: second node to check for common ancestor
 *
 * Return: the node to the common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	while (first && second)
	{
		if (is_descendant(first, second))
			return ((binary_tree_t *)first);
		first = first->parent;
	}
	return (NULL);
}
