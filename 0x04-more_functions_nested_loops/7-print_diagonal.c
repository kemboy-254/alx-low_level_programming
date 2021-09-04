#include "main.h"

/**
 * print_diagonal - Draws a diagonal.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int blank;
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (blank = 0; blank < i; blank++)
				_putchar(' ');
			_putchar('\\');

			if (x == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
