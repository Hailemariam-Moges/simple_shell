#include "shell.h"

/**
 * _getword - returns word
 *
 * @pGlobal: char pointer
 * @pOffset: start of the word
 * @pSize: length of the word
 *
 * Return: Word number
 */
char *_getword(char *pGlobal, int pOffset, int pSize)
{
	char *word;
	int cLoop;

	word = malloc(sizeof(char) * pSize + 1);

	if (word == NULL)
		return (NULL);

	for (cLoop = 0; cLoop < (pSize); cLoop++)
		word[cLoop] = pGlobal[pOffset + cLoop];

	word[cLoop] = '\0';

	return (word);
}
