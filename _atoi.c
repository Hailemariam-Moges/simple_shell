#include "shell.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @pString: char pointer
 *
 * Return: int
 */
int _atoi(char *pString)
{
	char sign = 1, current;
	int size = _strlen(pString), cLoop;
	unsigned int number = 0;

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		current = pString[cLoop];

		if (_isdigit(current))
		{
			number *= 10;
			number += current - 48;
		}
		else if (current == '-')
			sign = -sign;
		else if (number > 0)
			break;
	}

	return (sign * number);
}
