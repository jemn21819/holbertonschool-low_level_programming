#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head pointer
 */

void free_list(list_t *head)
{
	list_t *p;

	if (!head)
		return;
	while (head != NULL)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
