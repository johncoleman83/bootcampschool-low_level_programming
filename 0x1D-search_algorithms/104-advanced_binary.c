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
 * @mid: the middle that was checked
 * @val_is_greater: 1 or TRUE if val is greater than middle integer
 *
 * Return: the new size
 */
size_t find_size(size_t size, size_t mid, int val_is_greater)
{
	if (size <= 1)
		return (0);
	if (val_is_greater && size % 2 != 0)
		return (mid);
	return (mid + 1);
}
/**
 * advanced_binary - searches input array for input value using 'linear search'
 * @array: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	int val_is_greater;

	if (!array || !size)
		return (-1);

	if (value == array[0])
		return 
	print_array(array, size);
	mid = (size - 1) / 2;
	if (value == array[mid])
		return (mid);

	val_is_greater = value > array[mid];
	size = find_size(size, mid, val_is_greater);
	array += val_is_greater ? mid + 1 : 0;
	return (advanced_binary(array, size, value));
}
