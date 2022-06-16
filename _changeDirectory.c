#include "shell.h"

/**
 * _changeDirectory - change current directory
 *
 * @pData: data structure
 */
void _changeDirectory(aData_t *pData)
{
	char currentDirectory[500];

	getcwd(currentDirectory, 500);

	if (pData == NULL)
		return;

	if (
		!pData->arguments[1] ||
		_strcmp(pData->arguments[1], "~") == 0 ||
		_strcmp(pData->arguments[1], "~/") == 0
	)
		_changeToHomeDirectory(pData, currentDirectory);
	/* Old path */
	else if (_strcmp(pData->arguments[1], "-") == 0)
		_changeToPreviousDirectory(pData, currentDirectory);
	else
		_changeToAnyDirectory(pData, currentDirectory);
}
