#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *temp_h = h;

	while (temp_h)
	{
		printf("%d\n", temp_h->n);
		temp_h = temp_h->next;
		i++;
	}
	return (i);
}
