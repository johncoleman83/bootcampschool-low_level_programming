#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates new type of struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the type of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
	return (NULL);
}
