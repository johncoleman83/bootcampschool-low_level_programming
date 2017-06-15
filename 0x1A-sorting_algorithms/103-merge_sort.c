#include "sort.h"
/**
  * merge_sort - sorts an array of integers ascending order with merge sort
  * @array: the array to be sorted
  * @size: size of the array
  */
void merge_sort(int *array, size_t size)
{
	int *copy;

	if (array && size > 1)
	{
		copy = malloc(sizeof(int *) * size);
		sort(0, size - 1, array, copy);
		free(copy);
	}
}
/**
  * sort - divides array in half recursively, until the array is size 1
  * @start: start of the subarrray to be divided
  * @end: end of the subarray to be divded
  * @a: the original array for reference
  * @copy: copy of the original array to help sort
  */
void sort(int start, int end, int *a, int *copy)
{
	int middle;

	if (start < end)
	{
		middle = (start + end) / 2;
		if ((start + end) % 2 == 0)
			middle--;
		sort(start, middle, a, copy);
		sort(middle + 1, end, a, copy);
		merge(start, end, a, copy);
	}
}
/**
  * merge - merging of each half of an array into one sorted array
  * @start: start of the subarray to be divided and sorted
  * @end: end of the subarray to be divided and sorted
  * @a: the original array for reference
  * @copy: copy of the original array to help sort
  */
void merge(int start, int end, int *a, int *copy)
{
	int left, right, middle, tempi, tempsize;

	tempsize = end - start + 1;
	middle = ((start + end) / 2);
	if ((start + end) % 2 == 1)
		middle++;

	/* print initiation */
	printf("Merging...\n");
	left = start;
	printf("[left]: ");
	print_array(a + left, (size_t)(middle - left));
	right = middle;
	printf("[right]: ");
	print_array(a + right, (size_t)((end - middle) + 1));

	tempi = 0;
	/* initiate merge loop to populate copy array */
	while (left < middle && right <= end)
	{
		if (a[left] < a[right])
			copy[tempi++] = a[left++];
		else
			copy[tempi++] = a[right++];
	}
	while (left < middle)
		copy[tempi++] = a[left++];
	while (right <= end)
		copy[tempi++] = a[right++];

	/* copies copy array into main array sorted */
	tempi = 0;
	left = start;
	while (tempi < tempsize)
		a[left++] = copy[tempi++];

	/* print completion statement */
	printf("[Done]: ");
	print_array(a + start, tempsize);
}
