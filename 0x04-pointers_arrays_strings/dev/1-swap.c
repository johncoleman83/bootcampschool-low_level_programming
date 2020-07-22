#include "bootcamp.h"
/**
 * swap_int - don't swap horses when crossing a stream
 * @a: pointer to integer to swap
 * @b: pointer to integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int placeholder;

	placeholder = *a, *a = *b, *b = placeholder;
}
