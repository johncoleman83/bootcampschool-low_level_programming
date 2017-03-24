#include "lists.h"
/**
 * _strlen - returns string length of input string
 * @s: string to check length of
 * Return: length of string
 */
int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node_end - adds new node to end of linked list
 * @head: beginning of linked list
 * @str: new string to be added to linked list
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		temp_n = *head;
		while (temp_n->next)
			temp_n = temp_n->next;
		temp_n->next = new_node;
	}
	return (new_node);
}
