#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return:0
 */

int main(void)

{
	int a;
	int b;
	int c = 0;

	while (c <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			a = 0;
			while (a <= 9)
			{
				if (a != b && b != c && c < b && b < a)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);


					if (a + b + c != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			a++;
			}
		b++;
		}
	c++;
	}

	putchar('\n');
	return (0);

}
