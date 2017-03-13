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
 * new_dog - creates new type of struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the type of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoop_dogg;
	int name_len = my_strlen(name), owner_len = my_strlen(owner);

	snoop_dogg = malloc(sizeof(struct dog));
	if (snoop_dogg)
	{
		snoop_dogg->name = malloc(sizeof(char) * name_len);
		if (snoop_dogg->name)
		{
			snoop_dogg->name = name;
			snoop_dogg->age = age;
			snoop_dogg->owner = malloc(sizeof(char) * owner_len);
			if (snoop_dogg->owner)
			{
				snoop_dogg->owner = owner;
				return (snoop_dogg);
			}
			else
			{
				free(snoop_dogg->owner);
				free(snoop_dogg->name);
			}
		}
		else
			free(snoop_dogg->name);
	}
	free(snoop_dogg);
	return (NULL);
}
