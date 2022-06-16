#include "shell.h"

/**
 * _calloc - allocates memory for an array
 *
 * @pNumber: character number
 * @pSize: size of one case
 *
 * Return: allocate memory an initialize it
 */
void *_calloc(unsigned int pNumber, unsigned int pSize)
{
	void *ptr;

	if (pNumber == 0 || pSize == 0)
		return (NULL);

	ptr = malloc(pSize * pNumber);

	if (ptr == NULL)
		return (NULL);

	ptr = _memset(ptr, 0, pNumber * pSize);

	return (ptr);
}
