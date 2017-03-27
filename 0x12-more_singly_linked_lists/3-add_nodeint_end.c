#include "lists.h"
/**
 * add_nodeint_end - adds new node to end of linked list
 * @head: start of linked lists
 * @n: new number to add to new node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_h;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		temp_h = *head;
		while (temp_h->next)
			temp_h = temp_h->next;
		temp_h->next = new_node;
	}
	return (new_node);
}
