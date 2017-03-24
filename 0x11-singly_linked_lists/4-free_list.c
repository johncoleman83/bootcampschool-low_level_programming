#include "lists.h"
/**
 * free_list - frees linked list of all allocated memory
 * @head: beginning of linked list
 * Return: void, only frees memory
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		while (head)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
	}
}
