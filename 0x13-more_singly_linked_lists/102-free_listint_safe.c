
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer
 * Return: number of nodes free
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *actual;
	listint_t *next;
	int diff;

	register short count = 0;

	if (!h || !(*h))
		return (count);
	actual = *h;
	while (actual)
	{
		diff = actual - actual->next;
		if (diff > 0)
		{
			next = actual->next;
			free(actual);
			actual = next;
			count++;
		} else
		{
			free(actual);
			*h = NULL;
			count++;
			break;
		}

	}
	*h = NULL;
	return (count);
}
