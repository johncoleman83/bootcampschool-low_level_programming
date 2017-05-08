#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t i = 0;

	while (copy)
	{
		copy = copy->next;
		i++;
	}

	return (i);
}
