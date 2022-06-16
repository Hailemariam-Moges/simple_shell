#include "shell.h"

/**
 * _checkEscapeSeparators - check if character corresponds to one of escape
 *                          separators
 *
 * @pChar: character to compare
 * @pEscapeSeparators: list a separators
 *
 * Return: 0 if failed
 *         1 if success
 */
int _checkEscapeSeparators(char pChar, char *pEscapeSeparators)
{
	if (pEscapeSeparators == NULL)
		return (0);

	return (_inArray(pChar, pEscapeSeparators));
}
