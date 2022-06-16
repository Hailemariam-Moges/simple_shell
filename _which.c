#include "shell.h"

/**
 * _which - return absolute path of a command
 *
 * @pData: app data structure
 *
 * Return: absolute path
 */
char *_which(aData_t *pData)
{
	char **pathList, *absolutePath;
	struct stat st;
	int cLoop = 0;

	if (
		pData->commandName[0] == '.' &&
		pData->commandName[1] == '/' &&
		stat(pData->commandName, &st) == 0
	)
		return (pData->commandName);

	pathList = _parsingPathEnvironment(pData);

	if (pathList == NULL)
		return (NULL);

	while (pathList[cLoop] != NULL)
	{
		absolutePath = _generateAbsolutePath(pathList[cLoop], pData->commandName);

		/* Check if absolute path exist */
		if (stat(absolutePath, &st) == 0)
		{
			_freeCharDoublePointer(pathList);
			return (absolutePath);
		}
		free(absolutePath);
		cLoop++;
	}
	_freeCharDoublePointer(pathList);

	/* Try to find the command */
	if (stat(pData->commandName, &st) == 0)
	{
		return (pData->commandName);
	}
	else
		_errorHandler(pData, 101);

	return (NULL);
}
