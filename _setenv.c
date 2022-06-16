#include "shell.h"

/**
 * _setenv - set environment value
 *
 * @pEnviron: environment linked list
 * @pName: environment name
 * @pValue: environment value
 * @pOverwrite: overwrite
 */
void _setenv(
	environment_t *pEnviron,
	char *pName,
	char *pValue,
	int pOverwrite
) {
	environment_t *envNode;
	char *tmp;

	if (pName == NULL || pValue == NULL)
		return;

	envNode = _getenv(pEnviron, pName);

	if (envNode == NULL)
	{
		tmp = _generateEnvGlobal(pName, pValue);
		_addEnvNodeEnd(&pEnviron, tmp);
		free(tmp);
	}
	else if (pOverwrite == 1)
	{
		free(envNode->value);
		envNode->value = _strdup(pValue);
	}
}
