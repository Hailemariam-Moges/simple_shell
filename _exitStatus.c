#include "shell.h"

/**
 * _exitStatus - exit status
 *
 * @pData: data structure
 */
void _exitStatus(aData_t *pData)
{
	int code = EXIT_SUCCESS;

	if (pData == NULL)
		return;

	if (pData->arguments != NULL)
		code = _atoi(pData->arguments[1]);

	if (code < 0 || (pData->arguments[1] != NULL &&
				!_isNumber(pData->arguments[1])))
	{
		_errorHandler(pData, 106);
		code = 2;
	}

	_freeAppData(pData);
	_freeEnvList(pData->env);
	pData->env = NULL;
	free(pData);
	exit(code);
}
