#include "lists.h"
/**
 * add_nodeint - adds new node to beginning of linked list
 * @head: input head of linked list
 * @n: new number to go into new node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
