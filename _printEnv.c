#include "shell.h"

/**
 * _printenv - print environment variables
 *
 * @pEnviron: environment variable list
 */
void _printenv(environment_t *pEnviron)
{
	if (pEnviron == NULL)
		return;

	_puts(pEnviron->name);
	_puts("=");
	if (pEnviron->value != NULL)
		_puts(pEnviron->value);
	_puts("\n");
	_printenv(pEnviron->next);
}
