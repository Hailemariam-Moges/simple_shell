#include "shell.h"

/**
 * _ctrlC - control c managment
 *
 * @pSignal: signal value
 */
void _ctrlC(int pSignal __attribute__((unused)))
{
	_puts("\n");
	_prompt();
}
