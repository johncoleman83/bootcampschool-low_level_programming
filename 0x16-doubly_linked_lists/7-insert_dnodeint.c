#include "lists.h"
/**
 * insert_dnodeint_at_index - that inserts a new node at a given position
 * @h: head of linked list
 * @idx: index
 * @n: integer to be added
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp_node = *h;
	unsigned int i = 0;

	while (temp_node && i < idx - 1)
	{
		temp_node = temp_node->next;
		i++;
	}
	if (temp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *h;
				*h = new_node;
			}
			else
			{
				new_node->next = temp_node->next;
				temp_node->next = new_node;
			}
			return (new_node);
		}
	}
	return (NULL);
}
