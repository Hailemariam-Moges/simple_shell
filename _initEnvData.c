#include "shell.h"

/**
 * _initEnvData - init environment linked list
 *
 * @pData: data structre
 */
void _initEnvData(aData_t *pData)
{
	int cLoop = 0;
	environment_t *new;

	if (pData == NULL)
		return;

	while (environ[cLoop] != NULL)
	{
		new = _addEnvNodeEnd(&pData->env, environ[cLoop]);

		if (new == NULL)
		{
			free(pData->env);
			pData->env = NULL;
			return;
		}

		cLoop++;
	}
}
