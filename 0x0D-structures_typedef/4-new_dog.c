#include "dog.h"


int _strlen(char *s);
char *_strcpy(char *dest, char *src, int *length);

/**
 * new_dog - create new dog
 *
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return: pointer to new "dog", or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *puppy;
	char *puppy_name, *puppy_owner;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy_name = malloc(sizeof(*name) + (len_name + 1));
	if (puppy_name == NULL)
	{
		free(puppy_name);
		free(puppy);
		return (NULL);
	}
	puppy_owner = malloc(sizeof(*owner) + (len_owner + 1));
	if (puppy_owner == NULL)
	{
		free(puppy_owner);
		free(puppy_name);
		free(puppy);
		return (NULL);
	}

	_strcpy(puppy_name, name, &len_name);
	_strcpy(puppy_owner, owner, &len_owner);

	puppy->name = puppy_name;
	puppy->age = age;
	puppy->owner = puppy_owner;

	return (puppy);
}

/**
 * _strlen - length of a string
 *
 * @s: given string
 * Return: string length
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
 * @dest: copy destination
 * @src: string to copy
 * @length: length of string
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src, int *length)
{
	int i = 0;

	while (i < *length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
