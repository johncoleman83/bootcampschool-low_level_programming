#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: head of linked list
 * Return: data from deleted linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *copy_head = *head;
	int return_val;

	if (copy_head)
	{
		return_val = copy_head->n;
		*head = copy_head->next;
		free(copy_head);
	}
	else
		return_val = 0;
	return (return_val);
}
