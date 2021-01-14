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
	listint_t *actual;
	int sum = 0;

	if (!head)
		return (0);
	actual = head;
	while (actual)
	{
		sum += actual->n;
		actual = actual->next;
	}
	return (sum);
}
