#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index of linked list
 * @head: head of linked list
 * @index: index of element to be deleted
 * Return: 1 upon success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *index_node, *temp_node = *head;
	unsigned int i = 0;

	while (temp_node && i < index)
	{
		temp_node = temp_node->next;
		i++;
	}
	if (temp_node && i == index)
	{
		if (index != 0)
		{
			index_node = temp_node->next;
			if (index_node)
			{
				temp_node->next = index_node->next;
				free(index_node);
			}
		}
		else
		{
			*head = temp_node->next;
			free (temp_node);
		}
		return (1);
	}
	return (-1);
}
