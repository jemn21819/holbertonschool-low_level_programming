#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int node;

	int count = 0;

	while (head)
	{
		node = head - head->next;
		count++;
		printf("[%p] %i\n", (void *)head, head->n);
		if (node > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
