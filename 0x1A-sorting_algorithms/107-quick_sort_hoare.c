#include "sort.h"

/**
 * quick_sort_hoare - sorts an array with quicksort Hoare algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	int wall, pivot;

	if (array && size > 1)
	{
		wall = 0;
		pivot = (size - 1);

		qsh_dup(wall, pivot, array, size);
	}
}
/**
 * qsh_dup - recursively (divide & conquer) partition and repeat
 * @wall: beginning of sub array to sort
 * @pivot: end of sub array to sort and pivot point
 * @a: the beginning of the array, for printing purposes
 * @s: size of entire array for printing
 */
void qsh_dup(int wall, int pivot, int *a, size_t s)
{
	int first_wall, new_pivot, second_wall;

	if (wall < pivot)
	{
		second_wall = partition_hoare(wall, pivot, a, s);

		first_wall = wall;
		new_pivot = second_wall - 1;

		qsh_dup(first_wall, new_pivot, a, s);
		qsh_dup(second_wall, pivot, a, s);
	}
}
/**
 * partition_hoare - divides and sorts an array into sub arrays semi-sorted
 * @wall: beginning of array partition
 * @pivot: end of array to partition
 * @a: the beginning of the array, for printing purposes
 * @s: size of entire array for printing
 *
 * Return: the new wall barrier
 */
int partition_hoare(int wall, int pivot, int *a, size_t s)
{
	int compare, p, w;

	w = wall;
	p = pivot;

	compare = a[pivot];

	while (1 == 1)
	{
		while (a[w] < compare)
			w++;

		while (a[p] > compare)
			p--;

		if (w >= p)
			return (w);

		swap_int(&a[w], &a[p]);
		print_array(a, s);
		w++;
		p--;
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
