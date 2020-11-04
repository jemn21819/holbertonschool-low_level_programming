#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer
 *
 * Return: sum.
 */

int sum_listint(listint_t *head)
{
	listnt_t *node
	int sum = 0;

	if (!head)
		return (NULL);
	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
