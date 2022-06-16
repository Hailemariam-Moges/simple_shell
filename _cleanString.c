#include "shell.h"

/**
 * _cleanString - erase begin spaces and ending spaces from string
 *
 * @pString: string to clean
 *
 * Return: clean string
 */
char *_cleanString(char *pString)
{
	int cLoopStart = 0, cLoopEnd = 0, size = 0;
	char *string;

	if (pString == NULL)
		return (NULL);

	size = _strlen(pString);

	while (_inArray(pString[cLoopStart], " ") == 1)
		cLoopStart++;

	cLoopEnd = size - 1;
	while (_inArray(pString[cLoopEnd], " ") == 1)
		cLoopEnd--;
	cLoopEnd = size - 1 - cLoopEnd;

	string = _calloc(sizeof(char), size - cLoopStart - cLoopEnd + 1);
	_strncpy(string, (pString + cLoopStart), size - cLoopStart - cLoopEnd);
	string[size - cLoopStart - cLoopEnd] = '\0';

	/**prmString = *string;*/
	pString = _realloc(
		pString,
		size,
		sizeof(char) * (size - cLoopStart - cLoopEnd + 1)
	);
	_strcpy(pString, string);
	pString[size - cLoopStart - cLoopEnd] = '\0';
	free(string);
	return (pString);
}
