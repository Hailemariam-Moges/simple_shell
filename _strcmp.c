#include "shell.h"

/**
 * _strcmp - compares two strings
 *
 * @pString1: char pointer
 * @pString2: char pointer
 *
 * Return: difference between ascii number
 */
int _strcmp(char *pString1, char *pString2)
{
	int length;

	for (length = 0; pString1[length] != '\0'; length++)
	{
		if (pString1[length] - pString2[length] != 0)
			return (pString1[length] - pString2[length]);
	}

	return (0);
}
