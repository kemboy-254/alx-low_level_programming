#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the location of the string to be reversed
 */
void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
	if (*s == '\n')
	{
		return;
	}
=======
	if (*s == '\0')
	{
		return;
	}

>>>>>>> bf844ddcafa5a72bbaa12eecbb1d89479b720c29
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
