#include "shell.h"

/**
 * _array - Search a character in an array
 *
 * @pChar: character to search
 * @pArray: character array where to search
 *
 * Return: true if success
 */
int _array(char pChar, char *pArray)
{
	int cLoop;

	if (pArray == NULL)
		return (0);

	for (cLoop = 0; pArray[cLoop] != '\0'; cLoop++)
		if (pArray[cLoop] == pChar)
			return (1);

	return (0);
}
