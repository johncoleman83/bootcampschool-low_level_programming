#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: name of linked list input
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *temp_h = h;

	for (i = 0; temp_h; temp_h = temp_h->next)
		i++;
	return (i);
}
