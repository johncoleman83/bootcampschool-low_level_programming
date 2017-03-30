#include "lists.h"
/**
 * print_list - prints elements of linked list
 * @h: name of linked list input
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *temp_h = h;

	for (; temp_h; temp_h = temp_h->next, i++)
		printf("[%d] %s\n", temp_h->len, temp_h->str);
	return (i);
}
