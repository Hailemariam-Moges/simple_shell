#include "shell.h"

/**
 * _initData - init data structure
 *@pArgv: argv
 * Return: data structure
 */
aData_t *_initData(char **pArgv)
{
	aData_t *aData;

	aData = malloc(sizeof(aData_t) * 1);

	if (aData == NULL)
		return (NULL);

	aData->arguments = NULL;
	aData->buffer = NULL;
	aData->commandName = NULL;
	aData->commandList = NULL;
	aData->history = NULL;
	aData->env = NULL;
	aData->programName = (pArgv[0] != NULL) ? pArgv[0] : NULL;
	_initEnvData(aData);

	return (aData);
}
