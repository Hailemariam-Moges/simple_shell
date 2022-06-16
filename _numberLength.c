#include "shell.h"

/**
 * _nbrLen - length of a number
 * @pNumber: number
 * Return: length of the number
 */

int _nbrLen(int pNumber)
{
	int cLoop = 0, number;

	if (pNumber == 0)
		return (1);

	number = pNumber;

	if (number < 0)
	{
		number *= -1;
		cLoop++;	/* for the sign char */
	}

	while (number)
	{
		number /= 10;
		cLoop++;
	}

	return (cLoop);
}
