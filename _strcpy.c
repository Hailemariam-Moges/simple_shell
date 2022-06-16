#include "shell.h"

/**
 * _strcpy - copies the string pointed to by src,
 *               including the terminating null byte (\0),
 *               to the buffer pointed to by dest
 *
 * @pDest: char pointer
 * @pSrc: char pointer
 *
 * Return: char*
 */
char *_strcpy(char *pDest, char *pSrc)
{
	int cLoop, size = _strlen(pSrc);

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		pDest[cLoop] = pSrc[cLoop];
	}

	pDest[size] = '\0';

	return (pDest);
}
