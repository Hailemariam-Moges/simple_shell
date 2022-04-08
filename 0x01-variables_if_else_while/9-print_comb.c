#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Entyr point
 *  Return:0
 */

int main(void)

{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
