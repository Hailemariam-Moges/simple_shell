#include "shell.h"

/**
 * _addEnvNEnd - add a new node
 *
 * @pHeadNode: first node
 * @pGlobal: global environment value
 *
 * Return: last element
 */
environment_t *_addEnvNEnd(
	environment_t **pHeadNode,
	char *pGlobal
) {
	environment_t *new, *last;

	if (pHeadNode == NULL)
		return (NULL);

	new = _createEnvNode(pGlobal);
	if (new == NULL)
		return (NULL);

	if (*pHeadNode == NULL)
		*pHeadNode = new;
	else
	{
		last = _getLastENode(*pHeadNode);
		if (last == NULL)
		{
			free(new);
			return (NULL);
		}
		last->next = new;
	}

	return (new);
}
