#include "sort.h"
/**
  * selection_sort - sorts and array of integers in ascending order
  * @array: the array being sorted
  * @size: size of the array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *tmp;

	tmp = NULL;

	for (i = 0; array && i < size - 1; i++)
	{
		tmp = NULL;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				if (tmp && array[j] < *tmp)
				{
					tmp = &array[j];
				}
				else if (!tmp)
				{
					tmp = &array[j];
				}
			}
		}
		if (tmp)
		{
			swap_int(tmp, &array[i]);
			print_array(array, size);
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
