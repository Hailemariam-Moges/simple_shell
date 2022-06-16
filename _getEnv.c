#include "shell.h"

/**
 * _getenv - get environment variable
 *
 * @pEnviron: first node
 * @pName: environment variable name
 *
 * Return: environment variable node
 */
environment_t *_getenv(environment_t *pEnviron, char *pName)
{
	if (pEnviron == NULL)
		return (NULL);

	if (_strcmp(pEnviron->name, pName) == 0)
		return (pEnviron);

	return (_getenv(pEnviron->next, pName));
}
