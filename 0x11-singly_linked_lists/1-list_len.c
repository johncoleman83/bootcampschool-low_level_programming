#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: name of linked list input
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *temp_h = h;

	for (; temp_h; temp_h = temp_h->next)
		i++;
	return (i);
}
