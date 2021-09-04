#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n:The number of times the character _  is printed
 */
void print_line(int n)
{
	int n, x;

	for (x = 0; x <= n; x)
	{
		if (x > 0)
			putchar('_');
	}
}
