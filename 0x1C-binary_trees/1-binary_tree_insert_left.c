#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts new leaf_node into left child of parent
 * @parent: the parent node to add a leaf_node to
 * @value: the value to be given to the new leaf_node
 *
 * Return: returns pointer to new_node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf_node, *leaf_left_node;

	if (parent)
	{
		leaf_left_node = parent->left;
		leaf_node = malloc(sizeof(binary_tree_t) * 1);

		if (leaf_node)
		{
			leaf_node->parent = parent;
			leaf_node->n = value;
			leaf_node->right = NULL;
			leaf_node->left = leaf_left_node;
			if (leaf_left_node)
				leaf_left_node->parent = leaf_node;
		}
		parent->left = leaf_node;
	}
	else
		leaf_node = NULL;
	return (leaf_node);
}
