#include "shell.h"

/**
 * _addWord - add a word to an array
 *
 * @pWord: word to add
 * @pIndex: current index
 * @pArray: array
 */
void _addWord(char *pWord, int *pIndex, char **pArray)
{
	pWord = _cleanString(pWord);
	pArray[*pIndex] = _strdup(pWord);
	free(pWord);
	*pIndex += 1;
}
