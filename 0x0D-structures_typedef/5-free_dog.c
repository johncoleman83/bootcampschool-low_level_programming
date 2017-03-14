#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory from allocated struct
 * @d: input struct type
 * Return: void function to free memory
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
