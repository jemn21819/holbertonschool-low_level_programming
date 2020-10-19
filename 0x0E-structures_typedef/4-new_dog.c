#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: String
 * Return: String lenght
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: original string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int x;
	char *p;

	if (!str)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	p = malloc(sizeof(char) * (x + 1));
	if (!p)
		return (NULL);
	for (x = 0; str[x]; x++)
		p[x] = str[x];
	p[x] = '\0';
	return (p);
}

/**
 * new_dog - function that creates a new dog.
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 * Return: New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog || !name || !owner)
		return (NULL);
	new_name = malloc(_strlen(name) + 1);
	if (!new_name)
	{
		free(new_dog);
		return (NULL);
	}
	new_name = _strdup(name);
	new_dog->name = new_name;
	new_owner = malloc(_strlen(owner) + 1);
	if (!new_owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_owner = _strdup(owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
