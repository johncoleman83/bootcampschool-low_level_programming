#include "binary_trees.h"
bt_node_queue_t *push_queue(bt_node_queue_t **queue, binary_tree_t *bt_node)
{
	bt_node_queue_t *new_node, *temp;

	new_node = malloc(sizeof(bt_node_queue_t) * 1);
	if (!new_node)
		return (NULL);
	new_node->node = bt_node;
	if (!*queue)
		*queue = new_node;
	else
	{
		temp = *queue;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

binary_tree_t *pop_queue(bt_node_queue_t **queue)
{
	binary_tree_t *bt_node;
	bt_node_queue_t *temp;

	if (queue && *queue)
		bt_node = *queue->node;

	temp = *queue;
	*queue = temp->next;
	free(temp);

	return(bt_node);
}
/**
 * binary_tree_levelorder - prints root and begins traversing
 * @tree: the binary tree to parse
 * @func: the function to implement on the n int of each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	bt_node_queue_t *queue;

	queue = NULL;
	
	if (tree)
	{
		func(tree->n);
		btl(tree, func);
	}
}
