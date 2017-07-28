#include "binary_trees.h"
/**
 * array_to_bst - builds a binary tree based upon input array
 * @array: the input array with integers
 * @size: size of input array
 *
 * Return: returns a binary search tree, unbalanced
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	for (i = 0; array && i < size; i++)
		bst_insert(&tree, array[i]);
	return (tree);
}
