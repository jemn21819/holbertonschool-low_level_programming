#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: pointer to Pointer to head of a list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *actual;
	first = NULL;
	actual = NULL;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (*head != NULL)
	{
		actual = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = actual;
	}
	*head = first;
	return (*head);
}

