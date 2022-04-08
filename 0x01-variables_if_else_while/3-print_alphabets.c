#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)

{

	char c = 'a';


	char ch = 'A';

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		putchar(ch);
		c++, ch++;
	}


	putchar('\n');

	return (0);


}
