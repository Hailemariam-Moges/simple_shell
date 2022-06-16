#include "shell.h"

/**
 * _changeToPreviousDirectory - change to previous directory
 *
 * @pData: data structure
 * @pCurrentDirectory: current directory path
 */
void _changeToPreviousDirectory(aData_t *pData, char *pCurrentDirectory)
{
	environment_t *newDirectory;

	newDirectory = _getenv(pData->env, "OLDPWD");

	if (access(newDirectory->value, R_OK | W_OK) == 0)
	{
		chdir(newDirectory->value);
		/* set old path environment variable */
		_setenv(pData->env, "OLDPWD", pCurrentDirectory, 1);
	}
	else
	{
		perror(newDirectory->value);
	}
}
