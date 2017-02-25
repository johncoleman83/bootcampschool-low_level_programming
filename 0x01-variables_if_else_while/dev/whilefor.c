#include <stdio.h>
/*can you see this?
you basically have to learn that in C language...
	there is a difference between '0' and 0
*/

int main(void)
{
	int i, k;

	printf("while loop\n");
	k = 48;
	while (k < 58)
	{

		putchar(k);
		if (k == 50)
		{
			putchar(++k);
		}
		k++;
	}
	putchar('\n');

	for(i = 48; i < 58; i++)
	{
		putchar(i);

		if (i == 50)
		{
			putchar(++i);
		}
	}
	putchar('\n');
	return 0;
}
