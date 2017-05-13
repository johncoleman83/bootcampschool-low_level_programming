#include "holberton.h"
int main(void)
{
	char string1[] = "Holberton", string2[10], *p, i;
	p = _strncpy(string2, string1, 10);
	_puts("I just copied a string, see:");
	_puts(string2);
	return (0);
}
