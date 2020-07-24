#include "bootcamp.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
