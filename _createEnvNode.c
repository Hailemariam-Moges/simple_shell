#include "shell.h"

/**
 * _createEnvNode - create a new node
 *
 * @pGlobal: global environment value
 *
 * Return: new element
 */
environment_t *_createEnvNode(char *pGlobal)
{
	environment_t *new;

	if (pGlobal == NULL)
		return (NULL);

	new = malloc(sizeof(environment_t));
	if (new == NULL)
		return (NULL);

	new->name = _getenvname(pGlobal);
	new->value = _getenvvalue(pGlobal);
	new->global = _strdup(pGlobal);
	new->next = NULL;

	return (new);
}
