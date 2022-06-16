#include "shell.h"

/**
 * _puts - write all char from string to stdout
 *
 * @pStr: string to print
 *
 * Return: number of printed char
 */

int _puts(char *pStr)
{
	int i = 0, sum = 0;

	while (pStr[i])
	{
		sum += _putchar(pStr[i]);
		i++;
	}
	return (sum);
}
