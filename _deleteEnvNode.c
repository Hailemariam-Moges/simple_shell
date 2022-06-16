#include "shell.h"

/**
 * _deleteEnvNode - delete an environment variable
 *
 * @pHead: first node
 * @pName: name
 *
 * Return: error code
 */
int _deleteEnvNode(environment_t *pHead, char *pName)
{
	environment_t *beforeNode, *afterNode, *currentNode, *firstNode;
	unsigned int length, currentIndex;

	firstNode = pHead;
	currentIndex = _getEnvIndex(pHead, pName);

	if (firstNode == NULL)
		return (-1);

	length = _listEnvLen(firstNode);

	if (length == 0 || currentIndex > (unsigned int) length - 1)
		return (-1);

	if (currentIndex == 0)
	{
		pHead = pHead->next;
		free(firstNode);
		return (1);
	}

	beforeNode = _getEnvNodeAtIndex(firstNode, currentIndex - 1);
	if (currentIndex == length - 1)
		afterNode = NULL;
	else
		afterNode = _getEnvNodeAtIndex(firstNode, currentIndex + 1);

	currentNode = _getEnvNodeAtIndex(firstNode, currentIndex);
	beforeNode->next = afterNode;
	free(currentNode->name);
	currentNode->name = NULL;
	free(currentNode->value);
	currentNode->value = NULL;
	free(currentNode->global);
	currentNode->global = NULL;
	free(currentNode);
	currentNode = NULL;

	return (1);
}
