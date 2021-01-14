#include "lists.h"

/**
 * add_dnodeint - dds a new node at the beginning of a list
 * @head: double pointer head of list
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->next = (*head == NULL) ? NULL : *head;
	temp->prev = NULL;
	temp->n = n;
	if (*head)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
