#include "shell.h"

/**
 * _changeToAnyDirectory - change to any directory
 *
 * @pData: data structure
 * @pCurrentDirectory: current directory path
 */
void _changeToAnyDirectory(aData_t *pData, char *pCurrentDirectory)
{
	char *newDirectory;

	newDirectory = pData->arguments[1];

	if (access(newDirectory, R_OK | W_OK) == 0)
	{
		chdir(newDirectory);
		/* set old path environment variable */
		_setenv(pData->env, "OLDPWD", prmCurrentDirectory, 1);
	}
	else
		perror(newDirectory);
}
