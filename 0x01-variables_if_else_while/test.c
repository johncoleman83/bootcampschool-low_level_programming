#include <stdio.h>
/*can you see this?
you basically have to learn that in C language...
	there is a difference between '0' and 0
*/

int main(void)
{
	int i, k;
	char j, l;
	i = '0';
	l = '0';
	j = 48;
	k = 48;
	printf("integer '0'\n");

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	printf("character '0'\n");
	while (l < 58)
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	printf("character 47\n");
	while (j < 58)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	printf("integer 47\n");
	while (k < 58)
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return 0;
}
