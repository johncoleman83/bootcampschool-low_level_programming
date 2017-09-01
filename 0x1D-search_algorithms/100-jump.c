#include "search_algos.h"
#include <math.h>
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
/**
 * jump_search - searches input array for input value using 'jump search'
 * @array: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, check, prev, range;

	range = (size_t)sqrt(size);

	if (array && size)
	{
		prev = 0;
		while (1 == 1)
		{
			check = prev + range;
			if (check >= size)
				i = size - 1;
			else
				i = check;

			if (array[i] > value || check >= size)
			{
				printf("Value found between indexes");
				printf(" [%lu] and [%lu]\n", prev, i);
				return (linear_search(array + prev, i - prev,
						      value));
			}

			printf("Value checked array[%lu] = [%d]\n",
			       i, array[i]);
			prev = i;
		}
	}
	else
		return (-1);
}
