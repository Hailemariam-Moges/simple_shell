#include "shell.h"

/**
 * _freeCharDoublePointer - free memory of a double pointer
 *
 * @pPtr: double pointer
 */
void _freeCharDoublePointer(char **pPtr)
{
	int cLoop = 0;

	if (pPtr == NULL)
		return;

	while (pPtr[cLoop] != NULL)
	{
		free(pPtr[cLoop]);
		pPtr[cLoop] = NULL;
		cLoop++;
	}
	free(pPtr);
}
