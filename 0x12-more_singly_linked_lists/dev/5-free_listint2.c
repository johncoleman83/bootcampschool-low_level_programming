#include "lists.h"
/**
 * free_listint2 - frees a linked list sets head to NULL
 * @head: head of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
