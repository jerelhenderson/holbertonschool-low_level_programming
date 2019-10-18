#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - length of a string
 *
 * @s: char type
 * Return: returns the string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy string
 *
 * @dest: destination
 * @src: source
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
		length++;

	i = 0;

	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}

/**
 * new_dog - create new doggie
 *
 * @name: character
 * @age: float
 * @owner: character
 * Return: pointer to 'new dog'
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *puppy;
	char *name1;
	char *owner1;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}
	name1 = malloc(_strlen(name) + 1);
	if (name == NULL)
	{
		free(name1);
		free(puppy);
		return (NULL);
	}
	owner1 = malloc(_strlen(owner) + 1);
	if (owner1 == NULL)
	{
		free(owner1);
		free(name1);
		free(puppy);
		return (NULL);
	}

	_strcpy(name1, name);
	_strcpy(owner1, owner);

	puppy->name = name1;
	puppy->owner = owner1;
	puppy->age = age;

	return (puppy);
}
