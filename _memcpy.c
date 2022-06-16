#include "shell.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @pDest: pointer to memory area
 * @pSrc: pointer to src memory area
 * @pLimit: number ot bytes to fill
 *
 * Return: pointer to dest
 */
char *_memcpy(char *pDest, char *pSrc, unsigned int pLimit)
{
	unsigned int cLoop;

	for (cLoop = 0; cLoop < pLimit; cLoop++)
	{
		pDest[cLoop] = pSrc[cLoop];
	}

	return (pDest);
}
