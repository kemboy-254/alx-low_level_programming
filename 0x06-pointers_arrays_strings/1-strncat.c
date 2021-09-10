#include "main.h"

/**
 * _strncat - Concatenate two strings with n bytes from src.
 * @dest: String pointer receiving append.
 * @src: String pointer to append.
 * @n: Number of byte to be appended from src.
 *
 * Return: dest pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (*(dest + x))
	{
		x++;
	}
	while ((src + j < src + n) && *(src + y) != '\0')
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
