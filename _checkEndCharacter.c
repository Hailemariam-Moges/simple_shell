#include "shell.h"

/**
 * _checkEndCharacter - check if a string have an end of file character
 *
 * @pString: string
 *
 * Return: 0 if failed
 *         1 if success
 */
int _checkEndCharacter(char *pString)
{
	int cLoop = 0;

	if (pString == NULL)
		return (0);

	while (!pString[cLoop])
		cLoop++;

	return (pString[cLoop] == '\0');
}
