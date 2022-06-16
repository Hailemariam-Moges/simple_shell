#include "shell.h"

/**
 * _strcat - concatenates two string
 *
 * @pDest: char pointer
 * @pSrc: char pointer
 *
 * Return: string
 */
char *_strcat(char *pDest, char *pSrc)
{
	int length, d_size, s_size;

	d_size = _strlen(pDest);
	s_size = _strlen(pSrc);

	for (length = 0; length < s_size; length++)
	{
		pDest[d_size + length] = pSrc[length];
	}

	return (pDest);
}
