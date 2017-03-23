#include "lists.h"
/**
 * print_list - prints elements of linked list
 * @h: name of linked list input
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp_p = h;

	for (i = 0; temp_p; temp_p = temp_p->next, i++)
	{
		printf("[%d] %s\n", temp_p->len, temp_p->str);
	}
	return (i);
}
