#include "shell.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 *
 * @pString: pointer to memory area
 * @pCharacter: constant
 * @pLimit: number ot bytes to fill
 *
 * Return: write n bytes of value b
 */
char *_memset(char *pString, char pCharacter, unsigned int pLimit)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < pLimit; cLoop++)
	{
		pString[cLoop] = pCharacter;
	}

	return (pString);
}
