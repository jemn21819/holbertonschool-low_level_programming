#include "lists.h"

/**
 * dlistint_len - return lenght of elements in a linked list
 * @h: head of list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
