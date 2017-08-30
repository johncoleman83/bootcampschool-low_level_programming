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
 * new_size - finds the new size of array
 * @size: the size of array
 * @mid: the middle that was checked
 * @val_is_greater: 1 or TRUE if val is greater than middle integer
 *
 * Return: the new size
 */
size_t new_size(size_t size, size_t mid, int val_is_greater)
{
	if (size <= 1)
		return (0);
	if (val_is_greater && size % 2 != 0)
		return (mid);
	return (mid + 1);
}
/**
 * new_idx - finds the new index to return of array
 * @size: the size of array
 * @idx: the old index value
 * @val_is_greater: 1 or TRUE if val is greater than middle integer
 *
 * Return: the new index value
 */
size_t new_idx(size_t size, size_t idx, int val_is_greater)
{
	if (val_is_greater)
		idx = idx + (size) / 2 + (size == 2 ? 0 : 1);
	else
		idx = idx - (size) / 2;
	return (idx);
}
/**
 * _bs - searches input array recursively for input value using 'binary search'
 * @array: the input array
 * @size: the size of array
 * @idx: the index to be checked
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int _bs(int *array, size_t size, size_t idx, int value)
{
	size_t mid;
	int val_is_greater;

	if (!array || !size)
		return (-1);

	print_array(array, size);
	mid = (size - 1) / 2;
	if (value == array[mid])
		return (idx);

	val_is_greater = value > array[mid];
	size = new_size(size, mid, val_is_greater);
	array += val_is_greater ? mid + 1 : 0;
	idx = new_idx(size, idx, val_is_greater);
	return (_bs(array, size, idx, value));
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
	int idx = ((size - 1) / 2);

	return (_bs(array, size, idx, value));
}
