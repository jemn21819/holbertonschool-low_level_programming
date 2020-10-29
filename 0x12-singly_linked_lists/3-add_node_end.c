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
 * new_node_list - crea a new node list
 * @s: string
 * Return: new node
 */


list_t *new_node_list(const char *s)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(s);
	new_node->len = _strlen(s);
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pinter
 * @str: string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
	list_t *temp = *head;

	if (!head)
		return (NULL);
	node_end =  new_node_list(str);
	if (*head == NULL)
	{
		*head = node_end;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node_end;
	return (*head);
}
