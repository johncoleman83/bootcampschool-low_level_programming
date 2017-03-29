#include "lists.h"
/**
 * free_listint_safe - frees linked list safe version
 * @h: input head of linked list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	listint_t *temp, *check, *copy = *h;

	while (*h)
	{
		i++;
		temp = *h;
		*h = (*h)->next;
		free(temp);
		check = copy;
		j = 0;
		while (j < i)
		{
			if (*h == check)
			{
				*h = NULL;
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	return (i);
}
