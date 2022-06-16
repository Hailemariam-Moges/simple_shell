#include "shell.h"

/**
 * _strconcat - concatenates two strings.
 *
 * @pString1: char pointer to concatenate
 * @pString2: char pointer to concatenate
 *
 * Return: char pointer concatenated
 */
char *_strconcat(char *pString1, char *pString2)
{
	char *s;
	int cLoop1, cLoop2, size;

	if (pString1 == NULL)
		pString1 = "\0";

	if (pString2 == NULL)
		pString2 = "\0";

	size = _strlen(pString1) + _strlen(pString2);
	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	for (cLoop1 = 0; pString1[cLoop1]; cLoop1++)
		s[cLoop1] = pString1[cLoop1];

	for (cLoop2 = 0; pString2[cLoop2]; cLoop1++, cLoop2++)
		s[cLoop1] = pString2[cLoop2];

	s[cLoop1] = '\0';

	return (s);
}
