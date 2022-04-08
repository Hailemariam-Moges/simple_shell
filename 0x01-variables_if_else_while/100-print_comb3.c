#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return:0
 */

int main(void)
{
	int comb;
	int dig = 0;


	while (dig <= 9)
	{
		comb = 0;
		while (comb <= 9)
		{
			if (dig != comb && dig < comb)
			{
				putchar('0' + dig);
				putchar('0' + comb);

				if (comb + dig != 17)
				{
					putchar(',');
					putchar(' ');
				}

			}
			comb++;

		}
		dig++;
	}

	putchar('\n');

	return (0);



}
