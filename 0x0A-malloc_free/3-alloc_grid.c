#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - creates 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (0);
	arr = malloc(sizeof(int) * height);
	if (arr == 0)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == 0)
		{
			for (--i; i >= 0; i--)
				free(arr[i]);
			free(arr);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
