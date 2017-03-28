#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: input head of list
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *temp_h = h;

	for (; temp_h; temp_h = temp_h->next)
		i++;
	return (i);
}
