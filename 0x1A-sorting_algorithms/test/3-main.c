#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int array1[] = {19, 48};
    int array2[] = {87, 65, 28, 63, 93, 52, 39, 59, 27, 30, 24, 83, 69, 62, 13, 6, 88, 58, 92, 26, 42, 11, 16, 21, 75, 36, 71, 8, 45, 38};
    int array3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);


    n = sizeof(array1) / sizeof(array1[0]);

    print_array(array1, n);
    printf("\n");
    quick_sort(array1, n);
    printf("\n");
    print_array(array1, n);
    n = sizeof(array2) / sizeof(array2[0]);

    print_array(array2, n);
    printf("\n");
    quick_sort(array2, n);
    printf("\n");
    print_array(array2, n);
    n = sizeof(array3) / sizeof(array3[0]);

    print_array(array3, n);
    printf("\n");
    quick_sort(array3, n);
    printf("\n");
    print_array(array3, n);

    return (0);
}
