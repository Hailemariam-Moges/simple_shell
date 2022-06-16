#include "shell.h"

/**
 * _freeEnvList - free a struct linked list
 *
 * @pHeadNode: first element
 *
 * Return: frees a list_t list
 */
void _freeEnvList(environment_t *pHeadNode)
{
	if (pHeadNode == NULL)
		return;
	_freeEnvList(pHeadNode->next);
	free(pHeadNode->name);
	pHeadNode->name = NULL;
	free(pHeadNode->value);
	pHeadNode->value = NULL;
	free(pHeadNode->global);
	pHeadNode->global = NULL;
	free(pHeadNode);
}
