#include "binary_trees.h"
#include <stdio.h>
#define LEFT 1
#define RIGHT 2
/**
 * bst_insert - inserts node into binary search tree
 * @tree: the binary tree to be added to
 * @value: the value of the new node to add
 *
 * Return: pointer to new node or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp, *p, /* parent node */ *ret_val; /* return value */
	int side; /* side node was added */

	if (tree && *tree)
	{
		temp = *tree;
		while (temp)
		{
			p = temp;
			if (value == temp->n)
			{
				temp = ret_val = NULL;
				side = 0;
			}
			else if (value > temp->n)
			{
				temp = temp->right;
				side = RIGHT;
			}
			else
			{
				temp = temp->left;
				side = LEFT;
			}
		}
		if (side == LEFT)
			ret_val = p->left = binary_tree_node(p, value);
		else if (side == RIGHT)
			ret_val = p->right = binary_tree_node(p, value);
	}
	else if (tree)
		ret_val = *tree = binary_tree_node(*tree, value);
	else
		ret_val = NULL;
	return (ret_val);
}
