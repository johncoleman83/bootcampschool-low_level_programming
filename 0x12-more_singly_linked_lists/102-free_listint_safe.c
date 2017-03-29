#include "lists.h"
/**
 * free_listint_safe - frees linked list safe version
 * @h: input head of linked list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	listint_t *temp_h, *check_next, *copy_h = *h;

	while (*h)
	{
		i++;
		temp_h = *h;
		*h = (*h)->next;
		free(temp_h);
		check_next = copy_h;
		j = 0;
		while (j < i)
		{
			if (*h == check_next)
			{
				*h = NULL;
				return (i);
			}
			check_next = check_next->next;
			j++;
		}
	}
	return (i);
}
