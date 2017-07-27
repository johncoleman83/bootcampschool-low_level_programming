#include "binary_trees.h"
/**
 * bst_pop_queue - pops the head of the queue, in FIFO method
 * @queue: the queue to have an item pop'd
 *
 * Return: 1 if pop'd, 0 if nothing
 */
int bst_pop_queue(bt_queue_t **queue)
{
	bt_queue_t *temp;

	if (queue && *queue)
	{
		temp = *queue;
		*queue = temp->next;
		free(temp);
		return (1);
	}
	return (0);
}
/**
 * bst_push_queue - adds new binary tree node to end of queue FIFO method
 * @queue: the queue to add to
 * @bt_node: the binary tree node to add to the end of the queue
 *
 * Return: returns 0 on success, 1 on failure
 */
int bst_push_queue(bt_queue_t **queue, const binary_tree_t *bt_node)
{
	bt_queue_t *new_node;

	if (bt_node)
	{
		new_node = malloc(sizeof(bt_queue_t) * 1);
		if (new_node)
		{
			new_node->node = bt_node;
			new_node->next = NULL;
			if (!*queue)
				*queue = new_node;
			else
			{
				if ((*queue)->node->n >= bt_node->n)
					return (1);
				(*queue)->next = new_node;
				bst_pop_queue(queue);
			}
			return (0);
		}
	}
	return (1);
}
/**
 * bst - traverses binary tree with inorder functionality, checking prev value
 * with current value to ensure that the search tree is proper
 * @queue: queue to add nodes to
 * @tree: binary search tree
 *
 * Return: 0 if is complete, 1 or greater if not
 */
int bst(bt_queue_t **queue, const binary_tree_t *tree)
{
	static int check = 1;

	check--;
	if (tree)
	{
		check += bst(queue, tree->left);
		check += bst_push_queue(queue, tree);
		check += bst(queue, tree->right);
	}
	return (check);
}
/**
 * binary_tree_is_bst - checks if binary tree is proper binary search tree
 * @tree: input tree to check validity
 *
 * Return: 1 if is proper bst, 0 if false or failure
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	bt_queue_t *queue = NULL;
	int check = 0;

	if (tree)
	{
		check = bst(&queue, tree);
		bst_pop_queue(&queue);
		check = check ? 0 : 1;
	}
	return (check);
}
