#include "binary_trees.h"
/**
 * bst_search - searches for a value in a binary search tree
 * @tree: the input tree to search for values in
 * @value: the value to search for
 *
 * Return: pointer to the discovered node or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	while (tree && tree->n != value)
	{
		if (value > tree->n)
			tree = tree->right;
		else
			tree = tree->left;
	}
	return ((bst_t *)tree);
}
/**
 * replacement_right - handles the replacement if it occurs on the right
 * @node: the node to be replaced
 * @replacement: the replacement node
 *
 * Return: the new replacement if necessary
 */
bst_t *replacement_right(bst_t *node, bst_t *replacement)
{
	if (replacement->left)
	{
		while (replacement->left)
			replacement = replacement->left;
		replacement->parent->left = replacement->right;
		replacement->left = node->left;
		if (node->left)
			node->left->parent = replacement;
		replacement->right = node->right;
		if (node->right)
			node->right->parent = replacement;
	}
	return (replacement);
}
/**
 * add_null_values - handles replacement if the new replacement is parent
 * @replacement: the replacement node to update
 * @value: the value to be compared to add NULL values to replacement
 */
void add_null_values(bst_t *replacement, int value)
{
	if (replacement && replacement->n > value)
		replacement->left = NULL;
	else if (replacement && replacement->n < value)
		replacement->right = NULL;
}
/**
 * handle_parent - handles updates to the parent if necessary
 * @node: the input node replaced from the tree
 * @replacement: the new node replacing the old node
 * @value: the input value replaced from the tree
 */
void handle_parent(bst_t *node, bst_t *replacement, int value)
{
	if (node->parent)
	{
		if (node->parent->n > value)
			node->parent->left = replacement;
		else
			node->parent->right = replacement;
	}
}
/**
 * bst_remove - removes the node with the value of the input value
 * @root: root of the input tree to find the node to remove
 * @value: the value of the node that needs to be removed
 *
 * Return: root to the binary tree that has been modified
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node, *replacement;

	node = bst_search(root, value);
	if (node)
	{
		if (node->right)
		{
			replacement = node->right;
			replacement = replacement_right(node, replacement);
		}
		else if (node->left)
			replacement = node->left;
		else
		{
			replacement = node->parent;
			add_null_values(replacement, value);
		}
		if (replacement != node->parent)
		{
			replacement->parent = node->parent;
			handle_parent(node, replacement, value);
		}
		free(node);
	}
	else
		replacement = NULL;
	return (replacement && replacement->parent ? root : replacement);
}
