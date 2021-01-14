#include "lists.h"

/**
 * free_dlistint - function that frees a  list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			free_dlistint(head->next);
		free(head);
	}
}
