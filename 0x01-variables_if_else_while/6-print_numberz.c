#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)

{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);


}
