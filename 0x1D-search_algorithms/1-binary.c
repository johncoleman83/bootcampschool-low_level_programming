#include "search_algos.h"
/**
 * print_array - prints the input array
 * @array: the input array
 * @min: the minimum index number to print
 * @max: the maximum index number to print
 */
void print_array(int *array, size_t min, size_t max)
{
	printf("Searching in array: ");
	while (min <= max)
	{
		printf("%d", array[min]);
		printf("%s", min++ < max ? ", " : "\n");
	}
}
/**
 * _bs - searches input array recursively for input value using 'binary search'
 * @array: the input array
 * @min: the minimum index of the array
 * @max: the maximum index of the array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int _bs(int *array, size_t min, size_t max, int value)
{
	size_t mid;

	print_array(array, min, max);
	mid = min + ((max - min) / 2);
	if (value == array[mid])
		return (mid);
	if (min == max || max == 0)
		return (-1);

	if (value > array[mid])
		min = mid + 1;
	else
		max = mid;
	return (_bs(array, min, max, value));
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
	if (array && size)
		return (_bs(array, 0, size - 1, value));
	else
		return (-1);
}
