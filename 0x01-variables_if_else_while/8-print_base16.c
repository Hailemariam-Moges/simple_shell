#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return:0
 */

int main(void)

{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}


	ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		ch++
	}
	putchar('\n');
	return (0);


}
