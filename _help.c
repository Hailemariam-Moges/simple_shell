#include "shell.h"

/**
 * _help - manage command help
 *
 * @pData: data structure
 */
void _help(aData_t *pData)
{
	if (pData == NULL)
		return;
	if (pData->commandName == NULL)
		return;
	if (
		pData->arguments == NULL ||
		pData->arguments[0] == NULL ||
		pData->arguments[1] == NULL
	)
		return;
	if (_strcmp(pData->arguments[1], "cd") == 0)
		_cdHelp();
	else if (_strcmp(pData->arguments[1], "env") == 0)
		_envHelp();
	else if (_strcmp(pData->arguments[1], "setenv") == 0)
		_setenvHelp();
	else if (_strcmp(pData->arguments[1], "unsetenv") == 0)
		_unsetenvHelp();
	else if (_strcmp(pData->arguments[1], "exit") == 0)
		_exitHelp();
	else if (_strcmp(pData->arguments[1], "help") == 0)
		_helpHelp();
	else
		_defaultHelp(pData->arguments[1]);
}
