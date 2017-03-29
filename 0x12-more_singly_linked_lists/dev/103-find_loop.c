#include "lists.h"
/**
 * find_listint_loop - finds the loop inside of a linked list
 * @head: start of linked list
 * Return: address of node where loop begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *check;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (temp)
	{
		temp = temp->next;
		check = head;
		while (temp && check != temp)
		{
			if (check == temp->next)
				return (check);
			check = check->next;
		}
	}
	return (temp);
}
