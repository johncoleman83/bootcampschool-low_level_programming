#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of linked list
 * @index: index to return
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp_node = head;

	while (temp_node && count < index)
	{
		temp_node = temp_node->next;
		count++;
	}
	return (temp_node);
}
