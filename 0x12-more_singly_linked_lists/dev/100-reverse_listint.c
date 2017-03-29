#include "lists.h"
/**
 * reverse_listint - reverses linked list
 * @head: beginning of linked list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_node, *middle_node;

	middle_node = (*head)->next;
	last_node = middle_node->next;
	(*head)->next = NULL;
	while (middle_node)
	{
		middle_node->next = *head;
		*head = middle_node;
		middle_node = last_node;
		if (!middle_node)
			break;
		last_node = middle_node->next;
	}
	return (*head);
}
