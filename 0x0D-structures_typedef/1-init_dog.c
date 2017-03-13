#include "dog.h"
/**
 * init_dog - creates a new dog type from struct dog
 * @d: new dog structure name
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
