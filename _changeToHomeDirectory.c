#include "shell.h"

/**
 * _changeToHomeDirectory - change to home directory
 *
 * @pData: data structure
 * @pCurrentDirectory: current directory path
 */
void _changeToHomeDirectory(aData_t *pData, char *pCurrentDirectory)
{
	environment_t *newDirectory;

	newDirectory = _getenv(pData->env, "HOME");

	if (access(newDirectory->value, R_OK | W_OK) == 0)
	{
		chdir(newDirectory->value);
		/* set old path environment variable */
		_setenv(pData->env, "OLDPWD", prmCurrentDirectory, 1);
	}
	else
	{
		perror(newDirectory->value);
	}
}
