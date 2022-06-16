#include "shell.h"

/**
 * _getEnvNodeAtIndex - the nth node of a listint_t linked list
 *
 * @pHead: first element
 * @pIndex: element's number
 *
 * Return: a node
 */
environment_t *_getEnvNodeAtIndex(
	environment_t *pHead,
	unsigned int pIndex
) {
	unsigned int cLoop = 0;

	while (pHead != NULL)
	{
		if (pIndex == cLoop)
			return (pHead);
		pHead = pHead->next;
		cLoop++;
	}

	return (NULL);
}
