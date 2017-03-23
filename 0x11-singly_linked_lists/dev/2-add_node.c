#include "lists.h"
/**
 * _strlen - returns string length of input string
 * @s: string to check length of
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - adds new node to linked list
 * @head: beginning of linked list
 * @str: new string to be added to link list
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = _strlen(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
    {
        printf("Error\n");
        return (0);
    }
    new_node->str = strdup(str);
    new_node->len = length;
    new_node->next = *head;
	printf("[%d] %s\n", length, str);
	return (new_node);
}
