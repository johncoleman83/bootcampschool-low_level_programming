#include "search_algos.h"
/**
 * linear_search - searches input array for input value using 'linear search'
 * @array: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i,
			       array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}

	return (-1);
}
