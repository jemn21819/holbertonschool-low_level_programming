#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at nth position in list
 * @h: head of list
 * @idx: position to insert node at
 * @n: set n member
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *idxn = NULL, *idxprev = NULL;
	unsigned int x = 0;

	if (h == NULL)
		return (NULL);
	idxn = *h;
	idxprev = *h;
	while (idxn && idx)
	{
		x++;
		idxn = idxn->next;
		if (x == idx)
			break;
		if (idxn)
			idxprev = idxn;
	}
	if (x < idx)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = idxn;
	temp->prev = idxprev;
	if (idxprev && idx)
		idxprev->next = temp;
	if (idxn && idx)
		idxn->prev = temp;
	if (idx == 0)
	{
		temp->prev = NULL;
		temp->next = idxprev;
		if (idxprev)
			temp->next->prev = temp;
		*h = temp;
	}
	return (temp);
}
