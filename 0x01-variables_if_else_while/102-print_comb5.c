#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return:0
 */

int main(void)

{
	int i = 0, j = 0;

	int a, b, c, d;


	while (i < 100)
	{
		a = i / 10; /* tens firstnum */
		b = i % 10; /* unit firstnum */
		while (j < 100)
		{
			c = j / 10; /* tens secondnum */
			d = j % 10; /* unit secondnum */
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);

}
