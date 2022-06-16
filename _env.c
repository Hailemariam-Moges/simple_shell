#include "shell.h"

/**
 * _env - print environement variable
 *
 * @pData: data structure
 */
void _env(aData_t *pData)
{
	_printenv(pData->env);
}
