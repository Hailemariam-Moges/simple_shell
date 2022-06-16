#include "shell.h"

/**
 * _strstr - locates a substring.
 *
 * @pHaystack: string where to search
 * @pNeedle: string to search
 * @pBegin: force to start at begin if true
 *
 * Return: the address to first location
 */
char *_strstr(char *pHaystack, char *pNeedle, int pBegin)
{
	int haystackLoop = 0, needleLoop = 0, size = _strlen(pNeedle);

	if (pNeedle[0] == '\0')
	{
		return (pHaystack);
	}

	for (
		haystackLoop = 0, needleLoop = 0;
		(haystackLoop + needleLoop) < _strlen(pHaystack);
		needleLoop++
	)
	{
		if (prmNeedle[needleLoop] != pHaystack[haystackLoop + needleLoop])
		{
			if (pBegin == 0)
			{
				haystackLoop += needleLoop;
				needleLoop = 0;
			}
			else
				return (NULL);
		}

		if (needleLoop == size - 1)
		{
			return (&pHaystack[haystackLoop]);
		}
	}

	return (NULL);
}
