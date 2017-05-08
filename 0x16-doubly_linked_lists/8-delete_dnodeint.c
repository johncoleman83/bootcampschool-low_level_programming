#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of linked list
 * @index: index to delete node
 *
 * Return: 1 on success -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *index_node, *temp_node = *head;
	unsigned int i = 0;

	if (temp_node && (index == 0))
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}
	while (temp_node)
	{
		if (i + 1 == index)
		{
			index_node = temp_node->next;
			if (index_node)
			{
				temp_node->next = index_node->next;
				index_node->next->prev = temp_node;
				free(index_node);
				return (1);
			}
		}
		temp_node = temp_node->next;
		i++;
	}
	return (-1);
}
