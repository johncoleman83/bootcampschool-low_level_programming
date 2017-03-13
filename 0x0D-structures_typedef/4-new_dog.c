#include "dog.h"
#include <stdlib.h>
/**
 * my_strlen - finds string length in order to malloc properly
 * @str: input string
 * Return: string length integer
 */
int my_strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
/**
 * my_strcpy - copies string
 * @to: pointer to new string
 * @from: pointer to string to copy
 * Return: 1 success, 0 fail
 */
int my_strcpy(char *to, char *from)
{
	int i, len = my_strlen(from);

	to = malloc(sizeof(char) * len);
	if (to)
	{
		for (i = 0; i < len; i++)
			to[i] = from[i];
		return (1);
	}
	free(to);
	return (0);
}
/**
 * new_dog - creates new type of struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the type of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop_dogg;

	snoop_dogg = malloc(sizeof(struct dog));
	if (snoop_dogg != NULL)
	{
		if (my_strcpy(snoop_dogg->name, name))
		{
			snoop_dogg->name = name;
			snoop_dogg->age = age;
			if (my_strcpy(snoop_dogg->owner, owner))
			{
				snoop_dogg->owner = owner;
				return (snoop_dogg);
			}
		}
	}
	free(snoop_dogg);
	return (NULL);
}
