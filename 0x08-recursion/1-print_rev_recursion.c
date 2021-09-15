#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the location of the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}

	else
		_putchar('\n');
}
