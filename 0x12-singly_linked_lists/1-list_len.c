#include "lists.h"

/**
 * print_list - Returns the number of elements
 * in a linked list_t list.
 * @h: Pointer to node.
 *
 * Return: the number of elements in a linked list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
