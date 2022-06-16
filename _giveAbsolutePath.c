#include "shell.h"

/**
 * _generateAbsolutePath - Generate an absolute path from environment variable
 *
 * @pPath: path environment variable
 * @pCommandName: command name
 *
 * Return: absolute path
 */
char *_generateAbsolutePath(char *pPath, char *pCommandName)
{
	char *tmp, *path, *absolutePath, lastCharacter;
	int pathValueSize;

	path = _strdup(pPath);
	pathValueSize = _strlen(path);
	lastCharacter = path[pathValueSize - 1];

	if (lastCharacter != '/')
	{
		tmp = path;
		path = _strconcat(tmp, "/");
		free(tmp);
	}

	tmp = "";
	tmp = _strconcat(tmp, path);
	absolutePath = _strconcat(tmp, pCommandName);
	free(tmp);
	free(path);

	return (absolutePath);
}
