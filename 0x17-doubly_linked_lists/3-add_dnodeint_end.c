#include "lists.h"

/** add_dnodeint_end - adds a new node at the end of a list
 * @head: double pointer to head
 * @n: new node to list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *tail = *head;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = temp;
	}
	temp->n = n;
	temp->next = NULL;
	temp->prev = tail;
	if (!(tail))
		*head = temp;
	return (temp);
}
