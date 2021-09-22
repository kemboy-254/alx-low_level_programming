#include "main.h"

/**
 * _strdup - Returns a poiter to a newly allocated space in memory
 * @str: pointer to a copy of string given as a parameter
 *
 * Return: Pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != 0)
		j++;

	dup = malloc((j * sizeof(char)) + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		dup[i] = str[i];
	}
	dup[j] == '\0';
	return (dup);
}
