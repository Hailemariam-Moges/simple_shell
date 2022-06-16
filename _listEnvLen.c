#include "shell.h"

/**
 * _listEnvLen - length of a linked list
 *
 * @pHead: first node
 *
 * Return: length
 */
int _listEnvLen(environment_t *pHead)
{
	if (pHead == NULL)
		return (0);
	if (pHead->next == NULL)
		return (1);
	else
		return (_listEnvLen(pHead->next) + 1);
}
