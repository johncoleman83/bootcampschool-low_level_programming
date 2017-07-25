#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts new leaf_node into right child of parent
 * @parent: the parent node to add a leaf_node to
 * @value: the value to be given to the new leaf_node
 *
 * Return: returns pointer to new_node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf_node, *leaf_right_node;

	if (parent)
	{
		leaf_right_node = parent->right;
		leaf_node = malloc(sizeof(binary_tree_t) * 1);

		if (leaf_node)
		{
			leaf_node->parent = parent;
			leaf_node->n = value;
			leaf_node->left = NULL;
			leaf_node->right = leaf_right_node;
			if (leaf_right_node)
				leaf_right_node->parent = leaf_node;
		}
		parent->right = leaf_node;
	}
	else
		leaf_node = NULL;
	return (leaf_node);
}
