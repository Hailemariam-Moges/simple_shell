#include "shell.h"

/**
 * _unsetenv - unset environment variable
 *
 * @pData: data structure
 * @pName: environment name
 */
void _unsetenv(aData_t *pData, char *pName)
{
	_deleteEnvNode(pData->env, pName);
}
