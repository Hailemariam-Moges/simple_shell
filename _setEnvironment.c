#include "shell.h"

/**
 * _setEnvironment - set environment variable
 *
 * @pData: data's structure
 */
void _setEnvironment(aData_t *pData)
{
	if (pData == NULL)
		return;

	if (pData->arguments == NULL)
		return;

	if (pData->arguments[1] == NULL || pData->arguments[2] == NULL)
		return;

	_setenv(pData->env, pData->arguments[1], pData->arguments[2], 1);
}
