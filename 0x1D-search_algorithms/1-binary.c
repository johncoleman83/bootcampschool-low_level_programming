#include "search_algos.h"

/**
 * print_array - prints the input array
 * @array: the input array
 * @size: the size of array
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d", array[i]);
		printf("%s", i++ < size - 1 ? ", " : "\n");
	}
}
/**
 * find_size - finds the new size of array
 * @size: the size of array
 * @compare: next array is either greater than or less than the check value
 *
 * Return: the new size
 */
size_t find_size(size_t size, int compare)
{
	if (size % 2 == 0)
		return (size / 2);
	if (compare > 0)
		return (size / 2);
	else if (size > 1)
		return ((size / 2) + 1);
	else
		return (0);
}
/**
 * binary_search - searches input array for input value using 'linear search'
 * @array: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;

	if (!array || !size)
		return (-1);
	print_array(array, size);
	mid = size % 2 == 0 ? size / 2 - 1 : size / 2;
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
	{
		size = find_size(size, 1);
		array = array + mid + 1;
	}
	else
		size = find_size(size, -1);
	return (binary_search(array, size, value));
}
