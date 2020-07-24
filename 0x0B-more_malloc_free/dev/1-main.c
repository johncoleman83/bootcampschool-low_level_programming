#include "bootcamp.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Bootcamp ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
