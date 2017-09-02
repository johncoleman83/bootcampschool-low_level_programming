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
 * two_power_of - returns 2 to the power of input number
 * @exponent: multiply 2 by 2 this number of times
 *
 * Return: 2 to the power of the exponent
 */
size_t two_power_of(size_t exponent)
{
	size_t power = 1;

	while (exponent-- != 0)
		power *= 2;

	return (power);
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
 * exponential_search - searches input array for value with exponential search
 * @array: the input array
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index of where the found value is or -1 on error
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, check, prev, exponent;

	if (!array || !size)
		return (-1);

	exponent = prev = 0;
	while (1 == 1)
	{
		check = two_power_of(exponent);
		if (check >= size)
			i = size - 1;
		else
			i = check;

		if (array[i] > value || check >= size)
		{
			printf("Value found between indexes");
			printf(" [%lu] and [%lu]\n", prev, i);
			return (_bs(array, prev, i, value));
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		exponent++;
		prev = i;
	}
}
