#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *actual;
	listint_t *tmp;

	if (!head)
		return;
	actual = *head;
	while (actual)
	{
		tmp = actual;
		actual = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
