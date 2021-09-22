#include "main.h"

/**
 * _strdup - Returns a poiter to a newly allocated space in memory
 * @str: pointer to a copy of string given as a parameter
 *
 * Return: Pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *p;
	int cont;
	int i;

	if (str == '\0')
		return ('\0');
	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	p = malloc((cont * sizeof(char)) + 1);
	if (p == '\0')
		return ('\0');
	for (i = 0; i < cont; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
