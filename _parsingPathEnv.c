#include "shell.h"

/**
 * _parsingPathEnvironment - split environment variable
 *
 * @pData: data structure
 *
 * Return: string array
 */
char **_parsingPathEnvironment(aData_t *pData)
{
	char **paths;
	environment_t *pathEnvNode;

	pathEnvNode = _getenv(pData->env, "PATH");
	paths = _strtow(pathEnvNode->value, PATH_SEPARATOR, NULL);

	return (paths);
}
