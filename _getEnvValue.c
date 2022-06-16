#include "shell.h"

/**
 * _getenvvalue - return environment value
 *
 * @pVariable: environment name
 *
 * Return: environment value
 */
char *_getenvvalue(char *pVariable)
{
	char **tmp, *name;

	tmp = _strtow(pVariable, ENV_SEPARATOR, NULL);

	if (tmp == NULL)
		return (NULL);

	name = _strdup(tmp[1]);
	_freeCharDoublePointer(tmp);
	tmp = NULL;

	return (name);
}
