
#include "shell.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @pPtr: source pointer
 * @pOldSize: in pointer size
 * @pNewSize: out pointer size
 *
 * Return: reallocated pointer
 */
void *_realloc(void *pPtr, unsigned int pOldSize, unsigned int pNewSize)
{
	void *s = pPtr;

	if (pPtr == NULL)
		return (malloc(pNewSize));
	if (pNewSize == pOldSize)
		return (pPtr);
	if (pNewSize == 0)
	{
		free(pPtr);
		return (NULL);
	}

	s = malloc(pNewSize);

	if (s == NULL)
		return (NULL);

	s = _memcpy(s, pPtr, pOldSize);
	free(pPtr);

	return (s);
}

