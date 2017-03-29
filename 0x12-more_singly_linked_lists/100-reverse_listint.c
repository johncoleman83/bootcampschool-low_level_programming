#include "lists.h"
/**
 * reverse_listint - reverses linked list
 * @head: beginning of linked list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *post_node, *pre_node = NULL;

	while (head && *head)
	{
		post_node = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = post_node;
	}
	*head = pre_node;
	return (*head);
}
