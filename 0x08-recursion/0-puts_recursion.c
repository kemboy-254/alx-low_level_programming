#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: pointer to the string to be printed
 */
void _puts_recursion(char *s)
{
        if (*s == '\0')
                return;
        printf("%c", *s);
        rec(s + 1);
}
//	}
//	else
//	{
//		_putchar('\n');
//	}
//}
