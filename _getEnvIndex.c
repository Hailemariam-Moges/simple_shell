#include "shell.h"

/**
 * _getEnvIndex - return index of an environment variable
 *
 * @pHead: first node
 * @pName: name
 *
 * Return: index
 */
int _getEnvIndex(environment_t *pHead, char *pName)
{
	if (pHead == NULL || _strcmp(pHead->name, pName) == 0)
		return (0);
	else
		return (_getEnvIndex(pHead->next, pName) + 1);
}
