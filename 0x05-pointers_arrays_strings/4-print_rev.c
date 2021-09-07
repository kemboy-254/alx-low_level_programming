#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: Set of characters
 *
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);
	i = l;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
