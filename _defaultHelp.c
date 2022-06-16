#include "shell.h"

/**
 * _defaultHelp - print help when any command found
 *
 * @pCommand: command name
 */
void _defaultHelp(char *pCommand)
{
	_puts("bash: help: Aucune rubrique d'aide ne correspond à \"");
	_puts(pCommand);
	_puts("\". Essayez \"help help\", \"man -k ");
	_puts(pCommand);
	_puts("\" ou \"info ");
	_puts(pCommand);
	_puts("\".\n");
}
