#include "lists.h"

/**
 * free_list- Frees list_t list
 * @head: The pointer to node
 */
void free_list(list_t *head)
{
	struct list_s *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
