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
	size_t i, prev, step, range;

	if (!array || !size)
		return (-1);
	range = (size_t)sqrt(size);
	step = prev = 0;
	while (1 == 1)
	{
		i = step * range;
		if (i >= size || array[i] >= value)
		{
			printf("Value found between indexes");
			printf(" [%lu] and [%lu]\n", prev, i);
			if (i >= size)
				i = size - 1;
			return (_ls(array, prev, i, value));
		}

		printf("Value checked array[%lu] = [%d]\n",
		       i, array[i]);
		prev = i;
		step++;
	}
}
