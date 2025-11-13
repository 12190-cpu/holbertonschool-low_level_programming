#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calcule la longueur d'une chaîne
 * @s: chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copie une chaîne de caractères
 * @dest: destination
 * @src: source
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL)
		return (NULL);

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Return: pointeur vers le nouveau chien, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	newdog->name = malloc(sizeof(char) * (len_name + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
