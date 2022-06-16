#include "shell.h"

/**
 * _strtow - splits a string into words
 *
 * @pString: char pointer
 * @pSeparators: separators
 * @pEscapeSeparators: escaping separators
 *
 * Return: word array
 */
char **_strtow(char *pString, char *pSeparators, char *pEscapeSeparators)
{
	int cLoop = 0, cLoop1 = 0, wordSize = 0, word_number = 0, size = 0;
	char *word = NULL, **words = NULL, character;

	if (pString == NULL)
		return (NULL);

	size = _strlen(pString);
	word_number = _wordNumber(pString, pSeparators);

	if (pString == NULL || !pString || word_number == 0)
		return (NULL);

	words = _calloc(sizeof(char *), (word_number + 1));

	if (words == NULL)
		return (NULL);

	for (cLoop = 0; cLoop <= size && cLoop1 < word_number; cLoop++)
	{
		character = pString[cLoop];
		if (_checkEscapeSeparators(character, pEscapeSeparators))
			break;
		if (!_checkSeparators(character, pSeparators))
			wordSize++;
		else
			if (wordSize > 0)
			{
				word = _getword(pString, cLoop - wordSize, wordSize);
				_addWord(word, &cLoop1, words);
				wordSize = 0;
			}
	}
	words[cLoop1] = NULL;

	return (words);
}
