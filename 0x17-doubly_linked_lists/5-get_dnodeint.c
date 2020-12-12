#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node linked list
 * @head: pointer to head of list
 * @index: index of node
 * Return: the nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int x = 0;

	while (temp)
	{
		if (x == index)
			return (temp);
		temp = temp->next;
		x++;
	}
	return (NULL);
}
