#include "search_algos.h"
/**
 * linear_search - searches input array for input value using 'linear search'
 * @arr: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int linear_search(int *arr, size_t size, int value)
{
	size_t i = 0;

	if (arr)
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, arr[i]);
			if (arr[i] == value)
				return (i);
			i++;
		}

	return (-1);
}
