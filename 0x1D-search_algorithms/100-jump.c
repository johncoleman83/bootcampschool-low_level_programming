#include "search_algos.h"
#include <math.h>
/**
 * _ls - searches input array for input value using 'linear search'
 * @array: the input array
 * @min: the minimum index value to check
 * @max: the maximum index value to check
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int _ls(int *array, size_t min, size_t max, int value)
{
	while (min <= max)
	{
		printf("Value checked array[%lu] = [%d]\n", min,
		       array[min]);
		if (array[min] == value)
			return (min);
		min++;
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
	size_t i, check, prev, step, range;

	range = (size_t)sqrt(size);

	if (array && size)
	{
		step = prev = 0;
		while (1 == 1)
		{
			check = step * range;
			if (check >= size)
				i = size - 1;
			else
				i = check;

			if (array[i] >= value || check >= size)
			{
				printf("Value found between indexes");
				printf(" [%lu] and [%lu]\n", prev, i);
				return (_ls(array, prev, i, value));
			}

			printf("Value checked array[%lu] = [%d]\n",
			       i, array[i]);
			prev = i;
			step++;
		}
	}
	else
		return (-1);
}
