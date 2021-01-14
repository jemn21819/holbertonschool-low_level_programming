#include <stdlib.h>
#include "dog.h"


/**
 * _strcpy - copies the string
 * @dest: Destination
 * @src: source
 * Return: dest value
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}


/**
 * _strlen - returns the length of a string.
 * @s: String
 * Return: String lenght
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
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
		return (free(new_dog), NULL);
	}
	new_name = _strcpy(new_name, name);
	new_dog->name = new_name;
	new_owner = malloc(_strlen(owner) + 1);
	if (!new_owner)
	{
		return (free(new_dog->name), free(new_dog), NULL);
	}
	new_owner = _strcpy(new_owner, owner);
	new_dog->owner = new_owner;
	new_dog->age = age;
	return (new_dog);
}
