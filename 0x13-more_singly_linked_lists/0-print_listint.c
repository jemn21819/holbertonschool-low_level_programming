#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (nodes);
}
