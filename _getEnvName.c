#include "shell.h"

/**
 * _getenvname - return environment name
 *
 * @pVariable: environment name
 *
 * Return: environment name
 */
char *_getenvname(char *pVariable)
{
	char **tmp, *name;

	tmp = _strtow(pVariable, ENV_SEPARATOR, NULL);

	if (tmp == NULL)
		return (NULL);

	name = _strdup(tmp[0]);
	_freeCharDoublePointer(tmp);
	tmp = NULL;

	return (name);
}
