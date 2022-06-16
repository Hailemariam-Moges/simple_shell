#include "shell.h"

/**
 * _strlen - return string length
 *
 * @pStr: string
 *
 * Return: string length
 */
int _strlen(char *pStr)
{
	if (pStr == NULL || *pStr == '\0')
		return (0);
	return (_strlen(pStr + 1) + 1);
}
