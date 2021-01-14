#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 * Return: the numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}



