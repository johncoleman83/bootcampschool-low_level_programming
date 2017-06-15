#include "sort.h"

/**
 * quick_sort - sorts an array with quicksort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int *wall, *pivot;

	if (array && size > 1)
	{
		pivot = array + (size - 1);
		wall = array;

		partition(wall, pivot, array, size);
	}
}

/**
 * partition - recursively (divide & conquer) sorts sub arrays
 * @wall: beginning of sub array to sort
 * @pivot: end of sub array to sort and pivot point
 * @a: the beginning of the array, for printing purposes
 * @s: size of entire array for printing
 */
void partition(int *wall, int *pivot, int *a, size_t s)
{
	int *i, *start, *end;

	start = wall;
	i = wall;

	while (i != pivot)
	{
		if (*i < *pivot)
		{
			if (i != wall)
			{
				swap_int(i, wall);
				print_array(a, s);
			}
			i++;
			wall++;
		}
		else
			i++;
		if (i == pivot)
		{
			if (wall != pivot)
			{
				if (*wall > *pivot)
				{
					swap_int(pivot, wall);
					print_array(a, s);
				}
				wall++;
			}
			end = wall - 1;
			if (end != start && wall != pivot)
				end--;
			partition(start, end, a, s);
			partition(wall, pivot, a, s);
		}
	}
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
