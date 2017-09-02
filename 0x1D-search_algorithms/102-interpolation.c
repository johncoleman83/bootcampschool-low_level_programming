#include "search_algos.h"
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
 * interpolation_search - searches input array for input value using
 * interpolation search method
 * @array: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, min, max;

	if (!array || !size)
		return (-1);

	min = 0;
	max = size ? size - 1 : 0;
	while (1 == 1)
	{
		i = min + (((double)(max - min) / (array[max] - array[min]))
			   * (value - array[min]));
		if (i >= size || value > array[size - 1] || value < array[0])
		{
			printf("Value checked array[%lu]", i);
			printf(" is out of range\n");
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n",
		       i, array[i]);
		if (value == array[i])
			return (i);
		else if (value > array[i])
			min = i + 1;
		else
			max = i - 1;
	}
}
