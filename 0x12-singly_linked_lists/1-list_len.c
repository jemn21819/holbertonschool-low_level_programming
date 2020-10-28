#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of the list
 * Return: numbers of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
