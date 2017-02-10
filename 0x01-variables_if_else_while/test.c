#include <stdio.h>
/*can you see this?
you basically have to learn that in C language...
	there is a difference between '0' and 0
*/

int main(void)
{
	int i;
	int j;
	
	i = 0;
	j = '0';
	
	if (i == j) {
		printf("char %c: int: %d == char: %c: int: %d\n", i, i, j, j);
	}
	
	if (i != j) {
		printf("char: %c: int: %d != char: %c: int: %d\n", i, i, j, j);
	}
	return 0;
}
