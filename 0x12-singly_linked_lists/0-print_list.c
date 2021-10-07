#include "lists.h"

/**
 * print_list- Prints all the elements of
 * a list_t list
 * @h: Pointer to node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != '\0')
	{
		if (h->str == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		j++;
		h = h->next;
	}
	return (j);
}
