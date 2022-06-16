#include "shell.h"

/**
 * _freeAData - free all pointer of the appllication
 *
 * @pData: data structure
 */
void _freeAData(aData_t *pData)
{
	if (pData == NULL)
		return;

	if (pData->arguments != NULL)
		_freeCharDoublePointer(pData->arguments);
	pData->arguments = NULL;
	if (pData->buffer != NULL)
		free(pData->buffer);
	pData->buffer = NULL;
	if (pData->commandName != NULL)
		free(pData->commandName);
	pData->commandName = NULL;
	if (pData->commandList != NULL)
		_freeCharDoublePointer(pData->commandList);
	pData->commandList = NULL;
	if (pData->history != NULL)
		_freeCharDoublePointer(pData->history);
	pData->history = NULL;
}
