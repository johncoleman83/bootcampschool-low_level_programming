#include "variadic_functions.h"

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'H', 0, "lberton");
    print_all("cefss", 'H', 3.1415, "lberton", NULL);
	print_all(NULL, NULL);
    return (0);
}
