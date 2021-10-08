#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
			num++;
		}
		h = h->next;
	}
	return (num);
}
