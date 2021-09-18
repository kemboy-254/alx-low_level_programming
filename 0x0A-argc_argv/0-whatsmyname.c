#include <stdio.h>

/**
 * main - Prinths the program namefollowed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: An array to the pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
