#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: souble pointer to head list
 * @n: node to be added
 * Return: address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *actual;

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		actual = *head;
		while (actual->next)
			actual = actual->next;
		actual->next = new_node;
	}
	return (new_node);
}
