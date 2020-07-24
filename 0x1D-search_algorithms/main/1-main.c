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

    printf("Found %d at index: %d\n\n", 0, binary_search(array, size, 0));
    printf("Found %d at index: %d\n\n", 1, binary_search(array, size, 1));
    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 3, binary_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 4, binary_search(array, size, 4));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, size, 5));
    printf("Found %d at index: %d\n\n", 6, binary_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 7, binary_search(array, size, 7));
    printf("Found %d at index: %d\n\n", 8, binary_search(array, size, 8));
    printf("Found %d at index: %d\n\n", 9, binary_search(array, size, 9));
    printf("size 2 array: Found %d at index: %d\n\n", 0, binary_search(array, 2, 0));
    printf("size 2 array: Found %d at index: %d\n\n", 1, binary_search(array, 2, 1));
    printf("size 1 array: Found %d at index: %d\n\n", 0, binary_search(array, 1, 0));
    printf("out of range (less than): Found %d at index: %d\n\n", -5, binary_search(array, size, -5));
    printf("out of range (greater than): Found %d at index: %d\n", 999, binary_search(array, size, 999));
    printf("Check NULL: %p %d\n", NULL, binary_search(NULL, size, 999));
    printf("Check size of %d %d\n", 0, binary_search(array, 0, 999));
    /*printf("Check large size %d %d\n", 25, binary_search(array, 25, 2));*/
    return (EXIT_SUCCESS);
}
