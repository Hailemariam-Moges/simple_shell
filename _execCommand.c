#include "shell.h"

/**
 * _execCommand - Execute a command
 *
 * @pData: app data array
 */
void _execCommand(aData_t *pData)
{
	pid_t child_pid;
	char *command;
	int status;

	if (pData->commandName == NULL)
		return;

	/* Get the absolute path of the command */
	command = _which(pData);

	if (command != NULL)
	{
		if (pData->commandName != command)
			free(pData->commandName);
		pData->commandName = command;
	}
	else
	{
		return;
	}

	/* Create a child */
	child_pid = fork();
	if (child_pid == 0)
	{
		/* Execute command*/
		if (execve(pData->commandName, pData->arguments, NULL) == -1)
			_errorHandler(pData, 103);
		return;
	}
	else if (child_pid == -1)
	{
		_errorHandler(pData, 102);
	}
	else
		waitpid(child_pid, &status, WUNTRACED);
}
