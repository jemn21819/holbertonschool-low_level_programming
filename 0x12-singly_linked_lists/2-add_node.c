#include "lists.h"

/**
 * _strlen - size of string
 * @s: string
 * Return: size
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
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
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
