#include "sort.h"

/**
 * quick_sort - sorts an array with quicksort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int wall, pivot;

	if (array && size > 1)
	{
		wall = 0;
		pivot = (size - 1);

		quick_sort_dup(wall, pivot, array, size);
	}
}
/**
 * quick_sort_dup - recursively (divide & conquer) partition and repeat
 * @wall: beginning of sub array to sort
 * @pivot: end of sub array to sort and pivot point
 * @a: the beginning of the array, for printing purposes
 * @s: size of entire array for printing
 */
void quick_sort_dup(int wall, int pivot, int *a, size_t s)
{
	int first_wall, second_wall, new_pivot;

	if (wall < pivot)
	{
		second_wall = partition(wall, pivot, a, s);

		first_wall = wall;
		new_pivot = second_wall - 1;

		if (first_wall != new_pivot && second_wall != pivot)
			new_pivot--;

		quick_sort_dup(first_wall, new_pivot, a, s);
		quick_sort_dup(second_wall, pivot, a, s);
	}
}
/**
 * partition - divides and sorts an array into sub arrays semi-sorted
 * @wall: beginning of array partition
 * @pivot: end of array to partition
 * @a: the beginning of the array, for printing purposes
 * @s: size of entire array for printing
 *
 * Return: the new wall barrier
 */
int partition(int wall, int pivot, int *a, size_t s)
{
	int i;

	i = wall;

	while (i != pivot)
	{
		if (a[i] < a[pivot])
		{
			if (i != wall)
			{
				swap_int(a + i, a + wall);
				print_array(a, s);
			}
			i++;
			wall++;
		}
		else
			i++;
	}
	if (wall != pivot)
	{
		if (a[wall] > a[pivot])
		{
			swap_int(a + pivot, a + wall);
			print_array(a, s);
		}
		wall++;
	}
	return (wall);
}

/**
  * swap_int - swap two integers
  * @a: integer 1
  * @b: interger 2
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
