#include "shell.h"

/**
 * _generateEnvGlobal - generate a global environment variable
 *                      from name and value
 *
 * @pName: environment name
 * @pValue: environment value
 *
 * Return: global environment variable
 */
char *_generateEnvGlobal(char *pName, char *pValue)
{
	char *tmp, *global;

	global = "";
	global = _strconcat(global, pName);
	tmp = _strconcat(global, "=");
	free(global);
	global = _strconcat(tmp, pValue);
	free(tmp);

	return (global);
}
