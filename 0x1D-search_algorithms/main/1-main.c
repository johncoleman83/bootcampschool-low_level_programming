#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", -5, binary_search(array, size, -5));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 4, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    printf("Check NULL: %p %d\n", NULL, binary_search(NULL, size, 999));
    printf("Check size of %d %d\n", 0, binary_search(array, 0, 999));
    /*printf("Check large size %d %d\n", 25, binary_search(array, 25, 2));*/
    return (EXIT_SUCCESS);
}
