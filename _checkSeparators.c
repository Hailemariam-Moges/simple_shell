#include "shell.h"

/**
 * _checkSeparators - check if a character correspond to one of separators or
 *                    EOF character
 *
 * @pChar: character to compare
 * @pSeparators: list of separators:
 *
 * Return: 0 if failed
 *         1 if success
 */
int _checkSeparators(char pChar, char *pSeparators)
{
	if (pSeparators == NULL)
		return (0);

	return (
		_inArray(pChar, pSeparators) == 1 ||
		pChar == '\0'
	);
}
