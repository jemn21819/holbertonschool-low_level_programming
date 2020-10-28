#include "lists.h"

/**
 * _strlen - size of string
 * @s: string
 * Return: size
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len++])
		continue;
	return (len - 1);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: string
 * Return: address of new elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
