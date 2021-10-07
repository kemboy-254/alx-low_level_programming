#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list- Prints all the elements of
 * a list_t list
 * @h: Pointer to node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t num = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
			printf("[%d] ", tmp->len);
		}
		else
		{
			if (tmp->str == NULL)
				printf("[0] (nil)");
			printf("[%d] ", tmp->len);
			printf("%s\n", tmp->str);
			num++;
		}
		tmp = tmp->next;
	}
	return (num);
}
