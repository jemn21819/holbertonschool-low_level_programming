#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a linked list
 * @head: double pointer of head list
 * @index: position node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *find = *head;
	unsigned int x = 0;

	while (find)
	{
		if (x == index)
			break;
		find = find->next;
		if (find)
			x++;
	}
	if (x < index)
		return (-1);
	if (find)
	{
		if (find->next)
			find->next->prev = find->prev;
		if (find->prev)
			find->prev->next = find->next;
		else
			*head = find->next;
		free(find);
		return (1);
	}
	return (-1);
}
