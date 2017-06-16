#include "sort.h"
/**
  * counting_sort - sorts an array of ints in ascending order w/counting sort
  * @array: the array that is being sorted
  * @size: the size of the array beigin sorted
  */
void counting_sort(int *array, size_t size)
{
	int i, max, final_idx, value_placed;
	int *new_arr, *final_arr;

	final_idx = 0;
	if (array && size > 1)
	{
		max = array[0];
		for (i = 0; i < (int)size; i++)
			if (array[i] > max)
				max = array[i];
		new_arr = calloc(sizeof(int *), max + 1);
		for (i = 0; i < (int)size; i++)
		{
			value_placed = array[i];
			new_arr[value_placed]++;
		}
		for (i = 0; i < max + 1; i++)
		{
			if (new_arr[i] != 0)
			{
				final_idx += new_arr[i];
				new_arr[i] = final_idx;
			}
			else
				new_arr[i] += final_idx;
		}
		print_array(new_arr, max + 1);
		final_arr = malloc(sizeof(int *) * size);
		for (i = 0; i < (int)size; i++)
		{
			value_placed = array[i];
			final_idx = new_arr[value_placed];
			final_arr[--final_idx] = value_placed;
			new_arr[value_placed]--;
		}
		for (i = 0; i < (int)size; i++)
			array[i] = final_arr[i];
		free(new_arr);
		free(final_arr);
	}
}
