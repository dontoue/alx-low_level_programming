#include "main.h"

/**
 * _puts - prints a string followed by a newline
 *
 * @str: input string.
 *
 * Return: no return.
 */

void _puts(char *str)
{
	int count = 0;

	while(*(str + count))
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
