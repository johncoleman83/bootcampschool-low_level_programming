#include "lists.h"
/**
 * get_nodeint_at_index - finds & returns nth node from linked list
 * @head: head of linked list
 * @index: index of the node to be returned
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp_node = head;

	while (temp_node && count < index)
	{
		temp_node = temp_node->next;
		count++;
	}
	return (temp_node);
}
