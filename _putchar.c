#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @pChar: The character to print
 *
 * Return: number of printed char
 */
int _putchar(char pChar)
{
	return (write(STDIN_FILENO, &pChar, 1));
}
