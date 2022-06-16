#include "shell.h"

/**
 * _unsetEnvironment - unset environment variable
 *
 * @pData: data's structure
 */
void _unsetEnvironment(aData_t *pData)
{
	if (pData == NULL)
		return;

	if (pData->arguments == NULL)
		return;

	if (pData->arguments[1] == NULL)
		return;

	_unsetenv(pData, pData->arguments[1]);
}
