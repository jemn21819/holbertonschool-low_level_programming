#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *actual;
	int less;

	if (!(*head) || !head)
		return (0);
	actual = *head;
	less = actual->n;
	*head = (*head)->next;
	free(actual);
	return (less);
}
