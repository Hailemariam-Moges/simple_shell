#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)

{

	char c = 'a';


	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}

	char ch = 'A';

	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(ch);
		ch++;
	}


	putchar('\n');

	return (0);


}
