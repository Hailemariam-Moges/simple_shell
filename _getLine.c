#include "shell.h"

/**
 * _getline - Return command line type by user
 *
 * @pData: data structure
 *
 * Return: buffer
 */
void _getline(aData_t *pData)
{
	char c = '\0';
	int i = 0, rd, bufferSize = BUFFER_SIZE;

	pData->buffer = _calloc(sizeof(char), BUFFER_SIZE);

	while (c != '\n' && c != EOF)
	{
		rd = read(STDIN_FILENO, &c, 1);

		if (rd == 0)
		{
			_putchar('\n');
			if (pData->env != NULL)
				_freeEnvList(pData->env);
			pData->env = NULL;
			_freeAppData(pData);
			free(pData);
			exit(EXIT_SUCCESS);
		}

		if (i >= bufferSize - 1)
		{
			pData->buffer = _realloc(
				pData->buffer,
				bufferSize,
				sizeof(char) * (i + 2)
			);
			bufferSize = i + 2;
		}
		pData->buffer[i] = c;
		i++;
	}
	pData->buffer[i] = '\0';
}
