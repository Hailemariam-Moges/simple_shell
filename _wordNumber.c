#include "shell.h"

/**
 * _wordNumber - returns word number
 *
 * @pString: char pointer
 * @pSeparators: separators
 *
 * Return: Word number
 */
int _wordNumber(char *pString, char *pSeparators)
{
	int cLoop = 0, count = 0;

	while (pString[cLoop] != '\0')
	{
		if (
			(
				_array(pString[cLoop], pSeparators) != 1 ||
				pString[cLoop] != '\0'
			 ) &&
			(
				_array(pString[cLoop + 1], pSeparators) == 1 ||
				pString[cLoop + 1] == '\0'
			)
		)
			count++;
		cLoop++;
	}

	return (count);
}
