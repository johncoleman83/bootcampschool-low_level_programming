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

	for (; temp_h; temp_h = temp_h->next, i++)
		printf("%d\n", temp_h->n);
	return (i);
}
