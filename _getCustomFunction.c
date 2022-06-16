#include "shell.h"

/**
 * _getCustomFunction - check custom command
 *
 * @pCommand: command
 *
 * Return: pointer function
 */
void (*_getCustomFunction(char *pCommand))(aData_t *)
{
	int i = 0;

	customCommand_t fp[] = {
		{"cd", _changeDirectory},
		{"env", _env},
		{"setenv", _setEnvironment},
		{"unsetenv", _unsetEnvironment},
		{"exit", _exitStatus},
		{"help", _help}
	};

	while (i < 6)
	{
		if (_strcmp(pCommand, (fp + i)->commandName) == 0)
			return ((fp + i)->func);
		i++;
	}

	return (NULL);
}
