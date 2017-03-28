#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: head of linked list
 * @idx: index of new node
 * @n: number for n element of struct of linked list
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node = *head;
	unsigned int i = 0;

	while (temp_node && i < idx - 1)
	{
		temp_node = temp_node->next;
		i++;
	}
	if (temp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
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
