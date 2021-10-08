#include "lists.h"

void free_list(list_t *head)
{
	struct list_s* tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
