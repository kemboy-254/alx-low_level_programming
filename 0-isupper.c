#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: ascii code for the character to check
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int upper;

	if (c <= 90 && c >= 65)
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}
	return (upper);
}
