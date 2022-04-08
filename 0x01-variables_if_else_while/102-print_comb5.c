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
	int c;
	int d = 0;

	while (d <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			b = 0;
			while (b <= 9)
			{
				a = 0;
				while (a <= 9)
				{
					if (!(d == a && c == b))
					{
						putchar('0' + d);
						putchar('0' + c);
						putchar(' ');
						putchar('0' + b);
						putchar('0' + a);
						if (!(d + c == 18 && b + a == 17 && b == 9))
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
	d++;
	}

	putchar('\n');
	return (0);
}
