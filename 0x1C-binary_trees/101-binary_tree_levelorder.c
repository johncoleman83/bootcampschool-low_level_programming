#include "binary_trees.h"
/**
 * push_queue - adds new binary tree node to end of queue FIFO method
 * @queue: the queue to add to
 * @bt_node: the binary tree node to add to the end of the queue
 *
 * Return: returns pointer to the newnode or NULL on failure
 */
bt_queue_t *push_queue(bt_queue_t **queue, const binary_tree_t *bt_node)
{
	bt_queue_t *new_node, *temp;

	new_node = malloc(sizeof(bt_queue_t) * 1);
	if (!new_node)
		return (NULL);
	new_node->node = bt_node;
	new_node->next = NULL;
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
/**
 * pop_queue - pops the head of the queue, in FIFO method
 * @queue: the queue to have an item pop'd
 *
 * Return: pointer to the binary tree node that is pop'd from the queue
 */
const binary_tree_t *pop_queue(bt_queue_t **queue)
{
	const binary_tree_t *bt_node;
	bt_queue_t *temp;

	if (queue && *queue)
	{
		bt_node = (*queue)->node;
		temp = *queue;
		*queue = temp->next;
		free(temp);
	}
	else
		bt_node = NULL;

	return (bt_node);
}
/**
 * binary_tree_levelorder - traverses binary tree and applies the input
 * function in the level order manner
 * @tree: the binary tree to parse
 * @func: the function to implement on the n int of each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	bt_queue_t *queue = NULL;
	const binary_tree_t *bt_node;

	if (tree && func)
	{
		push_queue(&queue, tree);
		while (queue)
		{
			bt_node = pop_queue(&queue);
			if (!bt_node)
				break;
			if (bt_node->left)
				push_queue(&queue, bt_node->left);
			if (bt_node->right)
				push_queue(&queue, bt_node->right);
			func(bt_node->n);
		}
	}
}
