#include "bootcamp.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate memory
 * @old_size: size in bytes of allocated memory
 * @new_size: newsize of memory block in bytes
 * Return: void pointer to new allocation of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
