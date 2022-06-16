#include "shell.h"

/**
 * _getLastENode - get last node
 *
 * @pHeadNode: first node
 *
 * Return: last element
 */
environment_t *_getLastENode(environment_t *pHeadNode)
{
	environment_t *head, *next;

	head = pHeadNode;

	if (head == NULL)
		return (NULL);

	next = head->next;

	if (next == NULL)
		return (head);
	else
		return (_getLastENode(next));
}
