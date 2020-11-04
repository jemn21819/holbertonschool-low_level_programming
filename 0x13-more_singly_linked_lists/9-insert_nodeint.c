#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head of list
 * @idx: index
 * @n: new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *actual;
	listint_t *new_node;

	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	actual = *head;
	while (actual)
	{
		if (i == idx - 1)
		{
			new_node->next = actual->next;
			actual->next = new_node;
			return (new_node);
		}
		i++;
		actual = actual->next;
	}
	free(new_node);
	return (NULL);
}
