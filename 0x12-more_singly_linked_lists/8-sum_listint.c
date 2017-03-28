#include "lists.h"
/**
 * sum_listint - returns sum of all data from (n) element of struct of linked
 * list
 * @head: head of linked list
 * Return: sum of all numbers in n element of struct of linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
