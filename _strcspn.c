include "shell.h"

/**
 * _strcspn - gets the length of a prefix substring.
 *
 * @pString: string to search
 * @pDeny: characters to deny
 *
 * Return: a pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found
 */
unsigned int _strcspn(char *pString, char *pDeny)
{
	unsigned int sLoop, dLoop;

	for (dLoop = 0; pDeny[dLoop] != '\0'; dLoop++)
	{
		for (sLoop = 0; pDeny[dLoop] != pString[sLoop]; sLoop++)
			if ('\0' == pString[sLoop])
				return (sLoop);
	}

	return (sLoop);
}
