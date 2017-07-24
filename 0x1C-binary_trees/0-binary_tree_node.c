#include "binary_trees.h"
/**
 * binary_tree_node - inserts new leaf node in binary tree based on given parent
 * left and right nodes of new leaf node having NULL value
 * @parent: parent node of new leaf in binary tree
 * @value: the value of the integer in the new leaf
 * Return: pointer to new leaf or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf_node;

	leaf_node = malloc(sizeof(binary_tree_t) * 1);

	if (leaf_node)
	{
		leaf_node->parent = parent;
		leaf_node->n = value;
		leaf_node->left = leaf_node->right = NULL;
	}

	return (leaf_node);
}
