#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: beginning of linked list
 * Return: number of elements in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, j;
	const listint_t *temp_h = head, *check_next;

	while (temp_h)
	{
		printf("[%p] %d\n", (void *)temp_h, temp_h->n);
		i++;
		temp_h = temp_h->next;
		check_next = head;
		j = 0;
		while (j < i)
		{
			if (temp_h == check_next)
			{
				printf("-> [%p] %d\n", (void *)temp_h, temp_h->n);
				return (i);
			}
			check_next = check_next->next;
			j++;
		}
	}
	return (i);
}
